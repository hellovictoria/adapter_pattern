#ifndef _DUCK_H
#define _DUCK_H
#include <iostream>


class Duck
{
    public:
        virtual void quack()=0;
        virtual void fly()=0;
};

class MallardDuck : public Duck
{
    public:
        void quack(){std::cout << "Quack" << std::endl;}
        void fly(){std::cout << "I'm flying"<< std::endl;}
};

#endif
