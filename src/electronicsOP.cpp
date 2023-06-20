#include "electronicsOP.h"
#include <iostream>

using namespace std;


electronicsOP::electronicsOP()
{
        cout << "electronicsOP constructor" << endl;
}
electronicsOP::~electronicsOP()
{
        cout << "electronicsOP deconstructor" << endl;
}

void electronicsOP::setBatteryVoltage(float voltage)
{
        this->battery_voltage = voltage;
}

float electronicsOP::getBatteryVoltage()
{
        return this -> battery_voltage;
}
