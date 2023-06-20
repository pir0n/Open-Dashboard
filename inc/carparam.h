#ifndef CARPARAM_H
#define CARPARAM_H

#include <iostream>
#include <electronicsOP.h>

using namespace std;

class carparam {
    private:
    string make;
    string model;
    


    public: 
    electronicsOP electronics_param;
    carparam();
    ~carparam();
    void setMake(string make);
    void setModel(string model);
    string getMake();
    string getModel();
    
    

};

#endif