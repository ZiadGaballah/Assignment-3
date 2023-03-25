#include "customer.hpp"
using namespace std;
void customer::setMecID(int num)
{
    MechaniclID = num;
}
void customer::setappointment(int num1, int num2)
{
    slot.h = num1;
    slot.m = num2;
}
int customer::getMecID()
{
    return MechaniclID;
}
int customer::getappointh()
{
    return slot.h;
}
int customer::getappointm()
{
    return slot.m;
}
bool customer :: operator == (customer& x)
{
    if (slot.h == x.getappointh() || slot.m == x.getappointm())
        return true;
    else
        return false;
}
bool customer :: operator >(customer& x)
{
    if (slot.h > x.getappointh() || slot.m > x.getappointh())
        return true;
    else
        return false;
}
bool customer :: operator <(customer& x)
{
    if (slot.h < x.getappointh() || slot.m < x.getappointm())
        return true;
    else
        return false;
}
