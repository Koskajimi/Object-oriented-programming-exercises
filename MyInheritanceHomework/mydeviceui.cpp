#include "mydeviceui.h"
#include "devicedisplay.h"
#include "devicemouse.h"
#include "devicetouchpad.h"
//#include "devicebaseclass.h"
using namespace std;

MyDeviceUI::MyDeviceUI()
{
    objectDeviceMouse = new DeviceMouse;
    objectDeviceDisplay = new DeviceDisplay;
    objectDeviceTouchpad = new DeviceTouchPad;
}
void MyDeviceUI::uiSetMouseInformation()
{
    cout<<"SET MOUSE INFORMATION"<<endl;
    cout<<"====================="<<endl;
    cout<<endl;
    cout<<"Set Mouse Device ID: ";
    objectDeviceMouse->setDeviceID();
    cout<<"Set Mouse Primary Button: ";
    objectDeviceMouse->setPrimaryButton();
    cout<<endl<<endl;
}
void MyDeviceUI::uiSetTouchpadInformation()
{
    cout<<"SET TOUCH PAD INFORMATION"<<endl;
    cout<<"========================="<<endl;
    cout<<endl;
    cout<<"Set Touch Pad Device ID: ";
    objectDeviceTouchpad->setDeviceID();
    cout<<"Set Touch Pad Sensitivity: ";
    objectDeviceTouchpad->setTouchpadSensitivity();
    cout<<endl<<endl;
}
void MyDeviceUI::uiSetDisplayInformation()
{
    cout<<"SET DISPLAY INFORMATION"<<endl;
    cout<<"======================="<<endl;
    cout<<endl;
    cout<<"Set Display Device ID: ";
    objectDeviceDisplay->setDeviceID();
    cout<<"Set Display Resolution: ";
    objectDeviceDisplay->setDisplayResolution();
    cout<<endl<<endl;
}
void MyDeviceUI::uiShowDeviceInformation()
{
    cout<<"SHOW DEVICE INFORMATION"<<endl;
    cout<<"======================="<<endl;
    cout<<endl;
    cout<<"Device Mouse ID"<<endl;
    cout<<objectDeviceMouse->getDeviceID()<<endl;
    cout<<"Device Mouse PrimaryButton"<<endl;
    cout<<objectDeviceMouse->getPrimaryButton()<<endl;
    cout<<"Device Touch Pad ID"<<endl;
    cout<<objectDeviceTouchpad->getDeviceID()<<endl;
    cout<<"Device Touch Pad Sensitivity"<<endl;
    cout<<objectDeviceTouchpad->getTouchpadSensitivity()<<endl;
    cout<<"Device Display ID"<<endl;
    cout<<objectDeviceDisplay->getDeviceID()<<endl;
    cout<<"Device Display Resolution"<<endl;
    cout<<objectDeviceDisplay->getDisplayResolution()<<endl;
    cout<<endl<<endl;
}

void MyDeviceUI::uiShowMenu()
{
    short valinta = 0;

    while (valinta !=5)
    {
    cout<<"DEVICE MENU"<<endl;
    cout<<"==========="<<endl;
    cout<<"1: Set Mouse Information"<<endl;
    cout<<"2: Set Touch Pad Information"<<endl;
    cout<<"3: Set Display Information"<<endl;
    cout<<"4: Show Device Information"<<endl;
    cout<<"5: Finish"<<endl;
    cout<<endl;
    cout<<"Choose"<<endl;
    cin>>valinta;

    switch (valinta)
    {
    case 1:
        uiSetMouseInformation();
        break;

     case 2:
        uiSetTouchpadInformation();
        break;

     case 3:
        uiSetDisplayInformation();
        break;

     case 4:
        uiShowDeviceInformation();
        break;

     default:
        cout<<"Choose again"<<endl;
        break;
    }
}
}
MyDeviceUI::~MyDeviceUI()
{
    delete objectDeviceDisplay;
    delete objectDeviceMouse;
    delete objectDeviceTouchpad;
    objectDeviceDisplay = nullptr;
    objectDeviceMouse = nullptr;
    objectDeviceTouchpad = nullptr;

}

