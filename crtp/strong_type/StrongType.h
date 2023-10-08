#ifndef _STRONG_TYPE_H
#define _STRONG_TYPE_H

template<typename T, typename Tag, template<typename> class... Skills>
struct StrongType : private Skills<StrongType<T, Tag, Skills...>>...
{
public:
    explicit StrongType(T const& value) : value_(value) {}

    T& get() {return value_;}
    T const& get() const {return value_;}
private:
    T value_;
};

#endif