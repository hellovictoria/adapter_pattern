#ifndef _TURKEY_H
#define _TURKEY_H
#include <iostream>


class Turkey
{
    public:
        virtual void gobble()=0;
        virtual void fly()=0;
};

class WildTurkey : public Turkey
{
    public:
        void gobble(){std::cout << "Gobble gobble" << std::endl;}
        void fly(){std::cout << "I'm flying a short distance" << std::endl;}
};

#endif
