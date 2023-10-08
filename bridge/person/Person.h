#ifndef _PERSON_H_
#define _PERSON_H_

#include <memory>

class Person
{
public:
    Person();
    ~Person();

    Person(Person const& other);
    Person& operator=(Person const& other);

    Person(Person&& other);
    Person& operator=(Person&& other);

    void setForename(const std::string& forename);
    const std::string& getForename() const;

    void setYearOfBirth(int yearOfBirth);
    int getYearOfBirth() const;

private:
    struct Impl;
    std::unique_ptr<Impl> const pimpl_;
};

#endif