#include <iostream>
#include "mysubclass.h"

using namespace std;

int main()
{
    MySubClass *objectMySubClass = new MySubClass;

  //  objectMySubClass->MyParentMemberFunction();
      objectMySubClass->myBaseFunctionOne();

    delete objectMySubClass;
    objectMySubClass = nullptr;
    return 0;
}
