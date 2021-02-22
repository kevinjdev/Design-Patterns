#ifndef FLY_BEHAVIOR_H
#define FLY_BEHAVIOR_H

#include <iostream>

class FlyBehavior
{
public:
    virtual void fly() const = 0;
    virtual ~FlyBehavior() {}
};

class FlyWithWings : public FlyBehavior
{
public:
    void fly() const override
    {
        std::cout << "I'm Flying with Wings" << std::endl;
    }
};

class CantFly : public FlyBehavior
{
public:
    void fly() const override
    {
        std::cout << "I can't fly. I'm sad :( " << std::endl;
    }
};

#endif