#ifndef customer_hpp
#define customer_hpp
#include <stdio.h>
#include <iostream>
#include "Person.hpp"
using namespace std;
class customer : public Person
{
private:
    int MechaniclID;
    appointment slot;
public:
    bool operator == (customer &x);
    bool operator >(customer &x);
    bool operator <(customer &x);
    void setMecID(int num);
    void setappointment(int num1, int num2);
    int getMecID();
    int  getappointh();
    int  getappointm();
};
#endif /* customer_hpp */
