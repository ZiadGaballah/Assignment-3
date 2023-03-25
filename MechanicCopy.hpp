#ifndef mechanic_hpp
#define mechanic_hpp
#include <stdio.h>
#include <iostream>
#include "Person.hpp"
using namespace std;
class mechanic: public Person
{
private:
    int count=0;
    appointment array[5];
public:
    int getcounter();
    int gethours(int x);
    int getmins(int x);
    void setcounter();
    void setappoint(int x, int y);
    bool isavailable(int h, int m);
};
#endif /* mechanic_hpp */
