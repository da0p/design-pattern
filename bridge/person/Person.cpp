#include "Person.h"
#include <string>

struct Person::Impl
{
    std::string forename;
    std::string surname;
    std::string address;
    std::string city;
    std::string country;
    std::string zip;
    int yearOfBirth;
};

Person::Person()
    : pimpl_{std::make_unique<Impl>()}
    {}

Person::~Person() = default;

Person::Person(Person const& other)
    : pimpl_{std::make_unique<Impl>(*other.pimpl_)}
    {}

Person& Person::operator=(Person const& other)
{
    *pimpl_ = *other.pimpl_;
    return *this;
}

Person::Person(Person&& other)
    : pimpl_{std::make_unique<Impl>(std::move(*other.pimpl_))}
    {}

Person& Person::operator=(Person&& other)
{
    *pimpl_ = std::move(*other.pimpl_);
    return *this;
}

void
Person::setForename(const std::string &forename)
{
    pimpl_->forename = forename;
}

const std::string&
Person::getForename() const
{
    return pimpl_->forename;
}

void
Person::setYearOfBirth(int yearOfBirth)
{
    pimpl_->yearOfBirth = yearOfBirth;
}

int
Person::getYearOfBirth() const
{
    return pimpl_->yearOfBirth;
}