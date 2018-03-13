#ifndef _TURKEYADAPTER_H
#define _TURKEYADAPTER_H
#include "Turkey.h"
#include "Duck.h"

class TurkeyAdapter : public Duck
{
    public:
        TurkeyAdapter(Turkey* turkey){this->turkey=turkey;}
        void quack(){turkey->gobble();}
        void fly(){for(int i=0;i<5;i++) turkey->fly();}
    private:
        Turkey* turkey;
};

#endif
