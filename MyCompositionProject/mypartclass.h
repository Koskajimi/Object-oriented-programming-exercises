#ifndef MYPARTCLASS_H
#define MYPARTCLASS_H
#include <iostream>
using namespace std;

class MyPartClass
{
public:
    MyPartClass();
    ~MyPartClass();
    void MyPartClassFunction();
    short MySecondPartClassFunction();
private:
    short MyPartClassVariable;
};

#endif // MYPARTCLASS_H
