#include <iostream>

template<typename T, template<typename> typename crtpType>
struct crtp
{
	T& underlying()
	{
		return static_cast<T&>(*this);
	}

	T const& underlying() const
	{
		return static_cast<T const&>(*this);
	}

private:
	crtp(){}
	friend crtpType<T>;
};

template<typename T>
struct Scale : crtp<T, Scale>
{
	void scale(double multiplicator)
	{
		this->underlying().setValue(
			this->underlying().getValue() * multiplicator
		);
	}
private:
	Scale(){}
	friend T;
};

template<typename T>
struct Square : crtp<T, Square>
{
	void square()
	{
		this->underlying().setValue(
				this->underlying().getValue() * this-> underlying().getValue());
	}

private:
	Square(){}
	friend T;
};

class Sensitivity : public Scale<Sensitivity>, Square<Sensitivity>
{
public:
	Sensitivity(double value) 
		: mValue(value) 
	{
	}

	double getValue() const
	{
		return mValue;
	}
	void setValue(double value)
	{
		mValue = value;
	}
private:
	double mValue;
};

int main(int argc, char *argv[])
{
	Sensitivity sensitivity{1.0};

	sensitivity.scale(10);

	std::cout << sensitivity.getValue() << std::endl;

	return 0;
}
