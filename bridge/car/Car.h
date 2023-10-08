#ifndef _CAR_H_
#define _CAR_H_

#include "Engine.h"
#include <memory>
#include <utility>

class Car
{
protected:
    explicit Car(std::unique_ptr<Engine> engine)
        : pimpl_(std::move(engine))
    {}
public:
    virtual ~Car() = default;
    virtual void drive() = 0;
    virtual void park() = 0;
protected:
    Engine* getEngine();
    Engine const* getEngine() const;
private:
    std::unique_ptr<Engine> pimpl_;
};

inline Engine*
Car::getEngine()
{
    return pimpl_.get();
}

inline Engine const* 
Car::getEngine() const
{
    return pimpl_.get();
}

#endif