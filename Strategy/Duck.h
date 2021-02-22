#ifndef DUCK_H
#define DUCK_H

#include "FlyBehavior.h"
#include "QuackBehavior.h"
#include <memory>
class Duck
{
private:
    std::unique_ptr<FlyBehavior> flyBehavior;
    std::unique_ptr<QuackBehavior> quackBehavior;

public:
    Duck(std::unique_ptr<FlyBehavior> fb = nullptr, std::unique_ptr<QuackBehavior> qb = nullptr);
    virtual ~Duck();
    virtual void display() const = 0;
    void swim();
    void fly();
    void quack();
    void setFlyBehavior(std::unique_ptr<FlyBehavior> fb);
    void setQuackBehavior(std::unique_ptr<QuackBehavior> qb);
};
#endif