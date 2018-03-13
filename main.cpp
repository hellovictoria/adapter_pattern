#include "Turkey.h"
#include "TurkeyAdapter.h"
#include "Duck.h"
#include <iostream>

int main()
{
    MallardDuck* mduck = new MallardDuck();
    WildTurkey* wturkey = new WildTurkey();
    Duck* turAdapter = new TurkeyAdapter(wturkey);

    std::cout << "The Turkey says..." << std::endl;
    wturkey->gobble();
    wturkey->fly();

    std::cout << "\nThe Duck says..." << std::endl;
    mduck->quack();
    mduck->fly();

    std::cout << "\nThe TurkeyAdapter says..." << std::endl;
    turAdapter->quack();
    turAdapter->fly();
    return 0;
}
