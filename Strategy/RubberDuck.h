#ifndef RUBBER_DUCK_H
#define RUBBER_DUCK_H

#include "Duck.h"
#include <iostream>

class RubberDuck : public Duck
{
public:
    RubberDuck() : Duck(std::unique_ptr<CantFly>(new CantFly()), std::unique_ptr<FakeQuack>(new FakeQuack()))
    {
    }

    void display() const override
    {
        std::cout << "I'm displaying a Rubber Duck" << std::endl;
    }
};
#endif