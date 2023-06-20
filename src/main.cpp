#include <iostream>
#include <string.h>
#include "carparam.h"

using namespace std;


int main()
{
    carparam car;
    car.setMake("Mazda");
    car.setModel("Miata");

    cout << "Make: " << car.getMake() << endl;
    cout << "Model: " << car.getModel() << endl;
    
    car.electronics_param.setBatteryVoltage(12.4);
    cout << "Battery voltage: ";
    cout << car.electronics_param.getBatteryVoltage() << endl;
    

    return 0;
}