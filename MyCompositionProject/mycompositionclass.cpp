#include "mycompositionclass.h"

MyCompositionClass::MyCompositionClass()
{
    cout<<"MyCompositionClass muodostinfunktio"<<endl;
    //objectMyPartClass.MyPartClassFunction();
    //cout<<"Osaluokan jasenmuuttuja MyPartClassVariable = "<<objectMyPartClass.MySecondPartClassFunction()<<endl;
    objectMyPartClass = new MyPartClass;
    objectMyPartClass ->MyPartClassFunction();
    cout<<"Osaluokan jasenmuuttuja MyPartClassVariable = " << objectMyPartClass->MySecondPartClassFunction()<<endl;
}
MyCompositionClass::~MyCompositionClass()
{
    cout<<"MyCompositionClass tuhoajafunktio"<<endl;
    delete objectMyPartClass;
    objectMyPartClass = nullptr;
}
