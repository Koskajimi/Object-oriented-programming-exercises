#ifndef MYDEVICEUI_H
#define MYDEVICEUI_H
#include "devicedisplay.h"
#include "devicemouse.h"
#include "devicetouchpad.h"
#include "devicebaseclass.h"
#include <iostream>
using namespace std;


class MyDeviceUI
{
public:
    MyDeviceUI();
    ~MyDeviceUI();
    void uiShowMenu();
    void uiSetMouseInformation();
    void uiSetTouchpadInformation();
    void uiSetDisplayInformation();
    void uiShowDeviceInformation();

private:
    DeviceDisplay *objectDeviceDisplay;
    DeviceMouse *objectDeviceMouse;
    DeviceTouchPad *objectDeviceTouchpad;
};

#endif // MYDEVICEUI_H
