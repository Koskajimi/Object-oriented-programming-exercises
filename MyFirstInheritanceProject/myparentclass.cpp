#include "myparentclass.h"

MyParentClass::MyParentClass()
{
    cout<<"MyParentClass muodostinfunktio"<<endl;
    MyParentMemberVariable  = 10;
}
MyParentClass::~MyParentClass()
{
    cout<<"MyParentClass tuhoajafunktio"<<endl;
}
void MyParentClass::MyParentMemberFunction()
{
    cout<<"MyParentClass luokan jasenfunktio MyParentMemberFunction()"<<endl;
    cout<<"MyParentMemberVariable jasenmuuttujan arvo= "<<MyParentMemberVariable<<endl;
}
