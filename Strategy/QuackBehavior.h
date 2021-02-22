#ifndef QUACK_BEHAVIOR_H
#define QUACK_BEHAVIOR_H

#include <iostream>

class QuackBehavior
{
public:
    virtual void quack() const = 0;
    virtual ~QuackBehavior() {}
};

class NormalQuack : public QuackBehavior
{
public:
    void quack() const override
    {
        std::cout << "I am quacking normally" << std::endl;
    }
};

class FakeQuack : public QuackBehavior
{
public:
    void quack() const override
    {
        std::cout << "I am fake quacking" << std::endl;
    }
};

#endif