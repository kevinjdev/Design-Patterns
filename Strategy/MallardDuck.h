#ifndef MALLARD_DUCK_H
#define MALLARD_DUCK_H

#include "FlyBehavior.h"

#include <iostream>

class MallardDuck : public Duck
{
public:
    MallardDuck() : Duck(std::unique_ptr<FlyWithWings>(new FlyWithWings()), std::unique_ptr<NormalQuack>(new NormalQuack()))
    {
    }

    virtual void display() const override
    {
        std::cout << "I'm displaying a Mallard Duck" << std::endl;
    }
};
#endif