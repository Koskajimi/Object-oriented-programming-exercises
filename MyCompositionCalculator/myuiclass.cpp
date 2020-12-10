#include "myuiclass.h"

MyUiClass::MyUiClass()
{

}
MyUiClass::~MyUiClass()
{

}
void MyUiClass::inputNumbers()
{
    cout<<"Anna luku yksi:";
    cin>>numberOne;
    cout<<"Anna luku kaksi:";
    cin>>numberTwo;
}
void MyUiClass::showResult(short parameter)
{
    cout<<"Laskutoimitus ja tulos"<<endl;
    cout<<numberOne;
    switch(parameter)
    {
    case 1:
        cout<<"+";
        break;

    case 2:
        cout<<"-";
        break;

    case 3:
        cout<<"*";
        break;

    case 4:
        cout<<"/";
        break;
    }
    cout<<numberTwo<<"="<<result<<endl<<endl;
}

void MyUiClass::showMenu()
{
    short menuVariable = 1;
    while (menuVariable >0 && menuVariable <5)
    {
    cout<<" NELILASKIN "<<endl;
    cout<<"============"<<endl;
    cout<<"Numeroiden summa: 1"<<endl;
    cout<<"Numeroiden erotus: 2"<<endl;
    cout<<"Numeroiden tulo: 3"<<endl;
    cout<<"Numeroiden jakojaannos: 4"<<endl;
    cout<<"Lopeta: 5"<<endl;
    cout<<"Valinta:";
    cin>>menuVariable;

    inputNumbers();

    switch (menuVariable)
    {
    case 1:
        result = objectMyCalculationClass.pluslasku(numberOne, numberTwo);
        break;

    case 2:
        result = objectMyCalculationClass.miinuslasku(numberOne, numberTwo);
        break;

    case 3:
        result = objectMyCalculationClass.kertolasku(numberOne, numberTwo);
        break;

    case 4:
        result = objectMyCalculationClass.jakolasku(numberOne, numberTwo);
        break;
    default:
        cout<<"Anna uusi valinta:"<<endl;
        break;

    }
    showResult(menuVariable);
}
}
