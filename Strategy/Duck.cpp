#include "Duck.h"
#include <iostream>

Duck::Duck(std::unique_ptr<FlyBehavior> fb, std::unique_ptr<QuackBehavior> qb) : flyBehavior(std::move(fb)), quackBehavior(std::move(qb))
{
}
Duck::~Duck()
{
}
void Duck::swim()
{
    std::cout << "All Ducks Swim" << std::endl;
}
void Duck::fly()
{
    flyBehavior->fly();
}
void Duck::quack()
{
    quackBehavior->quack();
}
void Duck::setFlyBehavior(std::unique_ptr<FlyBehavior> fb)
{
    flyBehavior = std::move(fb);
}
void Duck::setQuackBehavior(std::unique_ptr<QuackBehavior> qb)
{
    quackBehavior = std::move(qb);
}