#ifndef DUCK_H
#define DUCK_H

#include "FlyBehavior.h"
#include "QuackBehavior.h"
class Duck
{   
    private:
    FlyBehavior fb;
    QuackBehavior qb;
    public:
    
    virtual void display();
    void swim();
    void fly();
    void quack();

};
#endif