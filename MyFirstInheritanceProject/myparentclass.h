#ifndef MYPARENTCLASS_H
#define MYPARENTCLASS_H
#include "mybaseclass.h"



class MyParentClass : public MyBaseClass
{
public:
    MyParentClass();
    ~MyParentClass();
    void MyParentMemberFunction();

protected:
    short MyParentMemberVariable;
};

#endif // MYPARENTCLASS_H
