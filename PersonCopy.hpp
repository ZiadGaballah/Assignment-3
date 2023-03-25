#ifndef Person_hpp
#define Person_hpp
#include <stdio.h>
#include <iostream>
#include <cstring>
#pragma once
using namespace std;
class Person
{
private:
    string Name;
    int ID;
    int Age;
public:
    Person();
    void setname(string n);
    void setID(int num);
    void setage(int num);
    string getname();
    int getID();
    int getage();
    struct appointment
    {
        int h;
        int m;
    };
    virtual void printinfo(); // using virtualization to allow overwriting this function in the other classes
    
};
#endif /* Person_hpp */
