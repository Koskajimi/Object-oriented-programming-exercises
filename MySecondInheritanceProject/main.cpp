#include <iostream>
#include "myfirstsubclass.h"
#include "myparentclass.h"
#include "mysecondsubclass.h"

using namespace std;

int main()
{

    MyFirstSubClass objectMyFirstSubClass;
    MySecondSubClass objectMySecondSubClass;

               objectMyFirstSubClass.getValue();

                    cout<<"MyFirstSubClass arvo="<<objectMyFirstSubClass.getValue()<<endl;

               objectMySecondSubClass.getValue();

                   cout<<"MySecondSubClass arvo="<<objectMySecondSubClass.getValue()<<endl;


    return 0;
}
