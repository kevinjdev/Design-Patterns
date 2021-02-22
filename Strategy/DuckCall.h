#ifndef DUCK_CALL_H
#define DUCK_CALL_H

#include "QuackBehavior.h"
#include <memory>

class DuckCall
{
private:
    std::unique_ptr<QuackBehavior> quackBehavior;

public:
    DuckCall() : quackBehavior(std::unique_ptr<FakeQuack>(new FakeQuack()))
    {
    }

    void quack() const
    {
        quackBehavior->quack();
    }
};
#endif