#include "mypartclass.h"

MyPartClass::MyPartClass()
{
    cout<<"MyPartClass muodostinfunktio"<<endl;
    MyPartClassVariable = 15;
}
MyPartClass::~MyPartClass()
{
    cout<<"MyPartClass tuhoajafunktio"<<endl;
}
void MyPartClass::MyPartClassFunction()
{
    cout<<"Ollaan osaluokan MyPartClass jasenfunktiossa MyPartClassFunktion()"<<endl;
}
short MyPartClass::MySecondPartClassFunction()
{
    return MyPartClassVariable;
}
