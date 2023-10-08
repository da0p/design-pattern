#ifndef _ENGINE_H_
#define _ENGINE_H_

class Engine
{
public:
    virtual ~Engine() = default;
    virtual void start() = 0;
    virtual void stop() = 0;
};

#endif