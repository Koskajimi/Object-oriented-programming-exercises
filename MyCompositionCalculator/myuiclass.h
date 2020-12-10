#ifndef MYUICLASS_H
#define MYUICLASS_H
#include <iostream>
using namespace std;
#include "mycalculationclass.h"

class MyUiClass
{
public:
    MyUiClass();
    ~MyUiClass();
    void inputNumbers();
    void showMenu();
    void showResult(short parameter);

private:
    MyCalculationClass objectMyCalculationClass;
    double numberOne, numberTwo, result;

};

#endif // MYUICLASS_H
