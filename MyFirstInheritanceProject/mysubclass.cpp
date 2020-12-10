#include "mysubclass.h"




MySubClass::MySubClass() : MySubMemberVariable(100)
{
    cout<<"MySubClass muodostinfunktio"<<endl;
    cout<<"MySubMemberVariable jasenmuuttujan arvo= "<<MySubMemberVariable<<endl;
    MyParentMemberVariable = 200;
}
MySubClass::~MySubClass()
{
    cout<<"MySubClass tuhoajafunktio"<<endl;
}
