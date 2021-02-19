#include "Duck.h"
#include "MallardDuck.h"

int main()
{
    Duck d1 = MallardDuck();
    Duck d2 = RubberDuck();

    d1.quack();
    d1.fly();
    d2.quack();
    d2.fly();

    return 0;
}