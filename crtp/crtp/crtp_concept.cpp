#include <iostream>
#include <concepts>

struct DenseVectorTag {};

template<typename T>
struct IsDenseVector : public std::is_base_of<DenseVectorTag, T>
{};

template<typename T>
constexpr bool IsDenseVector_v = IsDenseVector<T>::value;

template<typename T>
concept DenseVector = 
    requires(T t, size_t index) {
        t.size();
        t[index];
        {t.begin()} -> std::same_as<typename T::iterator>;
        {t.end()} -> std::same_as<typename T::iterator>;
    } &&
    requires(T const t, size_t index) {
        t[index];
        {t.begin()} -> std::same_as<typename T::const_iterator>;
        {t.end()} -> std::same_as<typename T::const_iterator>;
    } && IsDenseVector_v<T>;

template<typename T>
class DynamicVector : private DenseVectorTag
{

};

template<typename T, size_t size>
class StaticVector
{

};