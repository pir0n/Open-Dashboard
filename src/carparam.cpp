#include <carparam.h>
#include <iostream>
using namespace std;

carparam::carparam()
{
    cout << "Car constructor" << endl;
}
carparam::~carparam()
{
        cout << "Car deconstructor" << endl;

}
void carparam::setMake(string make)
{
    this->make = make;
}
void carparam::setModel(string model)
{
    this->model = model;
}
string carparam::getMake()
{
    return this->make;
}
string carparam::getModel()
{
    return this->model;
}
