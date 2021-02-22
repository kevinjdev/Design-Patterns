#include "Duck.h"
#include "MallardDuck.h"
#include "RubberDuck.h"
#include "DuckCall.h"

void doStuff(std::unique_ptr<Duck> &ducky)
{
    ducky->swim();
    ducky->fly();
    ducky->quack();
    ducky->display();
}
int main()
{
    // reusing QuackBehavior
    DuckCall duckCall;
    duckCall.quack();

    // Polymorphism utilizing Duck Class
    std::unique_ptr<Duck> duck1, duck2;
    std::unique_ptr<MallardDuck> mallard = std::unique_ptr<MallardDuck>(new MallardDuck());
    std::unique_ptr<RubberDuck> rubberduck = std::unique_ptr<RubberDuck>(new RubberDuck());
    duck1 = std::move(mallard);
    duck2 = std::move(rubberduck);

    doStuff(duck1);
    doStuff(duck2);

    return 0;
}