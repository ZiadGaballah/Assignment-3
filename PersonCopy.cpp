#include "Person.hpp"
#include <string>
using namespace std;
Person :: Person()
{
    Name="";
    ID=0;
    Age=0;
}

string Person :: getname()
{
    return Name;
}
int Person :: getID()
{
    return ID;
}
int Person :: getage()
{
    return Age;
}
void Person::setname(std::string n)
{
    Name = n;
}
void Person::setID(int num)
{
    ID = num;
}
void Person::setage(int num)
{
    Age = num;
}
void Person :: printinfo()
{
    cout << "Name: " << Name << "Age: " << Age << "ID: " << ID << endl;
}
