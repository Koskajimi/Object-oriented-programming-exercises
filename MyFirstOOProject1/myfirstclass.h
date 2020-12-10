#ifndef MYFIRSTCLASS_H
#define MYFIRSTCLASS_H
#include <iostream> //tarvitaan, koska tulostusolio cout on määritelty tässä kirjastossa

using namespace std; // tarvitaan, koska koko C++:n standardikirjasto on std-nimiavaruuden sisällä
                     // ja kun lause on kirjoitettu .h tiedostossa, niin ohjelmassa ei tarvitse käyttää
                     // käskyjen edessä etuliitettä std


class MyFirstClass
{

private:

    short myFirstMemberVariable;

    short numberOne = 20;
    short numberTwo = 10;
    char* teksti = "Hei, taalla ollaan!";

public:

    void myFirstMemberFunction();

    void mySecondMemberFunction(int numberOne,int numberTwo);

    short myThirdMemberFunction(short parameterOne);

    void myFourthMemberFunction(short parameterOne);

    void myFifthMemberFunction();

    //MyFirstClass();
};

#endif // MYFIRSTCLASS_H
