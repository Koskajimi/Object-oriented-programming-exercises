#ifndef MYSUBCLASS_H
#define MYSUBCLASS_H
#include "myparentclass.h"



class MySubClass : public MyParentClass
{
public:
    MySubClass();
    ~MySubClass();

private:
    short MySubMemberVariable;
};

#endif // MYSUBCLASS_H
