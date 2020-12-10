#ifndef MYCOMPOSITIONCLASS_H
#define MYCOMPOSITIONCLASS_H
#include <iostream>
using namespace std;
#include "mypartclass.h"

class MyCompositionClass
{
public:
    MyCompositionClass();
    ~MyCompositionClass();


private:
   // MyPartClass objectMyPartClass;
    MyPartClass *objectMyPartClass;

};

#endif // MYCOMPOSITIONCLASS_H
