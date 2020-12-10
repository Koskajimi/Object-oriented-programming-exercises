#include <iostream>
#include "myfirstclass.h"

using namespace std;

int main()
{
    MyFirstClass objectMyFirstClass;



    objectMyFirstClass.myFirstMemberFunction();

    objectMyFirstClass.mySecondMemberFunction(20, 10);

    short returnValue;

    returnValue = objectMyFirstClass.myThirdMemberFunction(2);

   cout<<returnValue<<endl;

    objectMyFirstClass.myFourthMemberFunction(3);



    return 0;
}// tämän rivin jälkeen olio objectMyFirstClass tuhoutuu
 // pinomuistista automaattisesti käyttöjarjestelman toimesta.
