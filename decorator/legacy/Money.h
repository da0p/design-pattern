#ifndef _MONEY_H_
#define _MONEY_H_

#include <cstdint>
#include <iostream>
#include <type_traits>

struct Money {
	Money(double v)
	: value(v)
	{}

	double value{};
};

template<class T>
constexpr bool is_arithmetic_v = std::is_arithmetic<T>::value;

template<typename T>
Money operator*(Money money,T factor)
{
	static_assert(is_arithmetic_v<T>, "");
	return Money{static_cast<uint64_t>(money.value) * factor};
}

inline Money operator+(Money lhs, Money rhs) noexcept
{
	return Money{lhs.value + rhs.value};
}

inline std::ostream& operator<<(std::ostream& os, Money money)
{
	return os << money.value;
}

#endif
