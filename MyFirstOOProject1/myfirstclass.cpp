#include "myfirstclass.h"
/*
MyFirstClass::MyFirstClass()
{

}
*/


void MyFirstClass::myFirstMemberFunction()
{
    myFirstMemberVariable = 10;

    cout << "Jasenmuuttujan myFirstMemberVariable arvo: "<<myFirstMemberVariable<<endl;
}

void MyFirstClass::mySecondMemberFunction(int numberOne, int numberTwo)
{

    int summa = 0;
    int tulo = 0;
    int erotus = 0;
    int osamaara= 0;

    summa = numberOne + numberTwo;
    tulo = numberOne * numberTwo;
    erotus = numberOne - numberTwo;
    osamaara = numberOne / numberTwo;

    cout<<numberOne << "+" << numberTwo << "=" <<summa<<endl;
    cout<<numberOne << "-" << numberTwo << "=" << erotus<<endl;
    cout<<numberOne << "*" << numberTwo << "=" << tulo<<endl;
    cout<<numberOne << "/" << numberTwo << "=" << osamaara<<endl;

    return;
}

short MyFirstClass::myThirdMemberFunction(short parameterOne)
{
    short localVariable;
    localVariable = parameterOne * 10;

    return localVariable;
}

void MyFirstClass::myFourthMemberFunction(short parameterOne)
{

    cout<<"arvo on: "<<parameterOne<<endl;

    myFifthMemberFunction();
}

void MyFirstClass::myFifthMemberFunction()
{
    char* teksti;

    teksti = "Hei, taalla ollaan!";
    cout<<teksti<<endl;
    cout<<numberOne<<" "<<numberTwo<<endl;
}
