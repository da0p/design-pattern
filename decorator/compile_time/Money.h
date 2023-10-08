#ifndef _MONEY_H_
#define _MONEY_H_

#include <cmath>
#include <concepts>
#include <cstdint>
#include <ostream>

struct Money
{
	uint64_t value{};
};

template<typename T>
	requires std::is_arithmetic_v<T>
Money operator*(Money money, T factor)
{
	return Money{static_cast<uint64_t>(money.value * factor)};
}

constexpr Money operator+(Money lhs, Money rhs) noexcept
{
	return Money{lhs.value + rhs.value};
}

inline std::ostream& operator<<(std::ostream& os, Money money)
{
	return os << money.value;
}

#endif
