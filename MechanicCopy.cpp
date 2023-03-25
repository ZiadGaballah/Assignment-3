#include "mechanic.hpp"
using namespace std;
bool mechanic ::isavailable(int h, int m)
{
    int x=1;
    for(int i=0;i<count;i++)
    {
        if(array[i].hours == h && array[i].mins== m)
        {
            x=0;
        }
        else
            continue;
    }
    return x;
}
void mechanic:: setcounter()
{
    count++;
}
void mechanic:: setappoint(int x,int y)
{
    array[count].hours=x;
    array[count].mins=y;
    count++;
}
int mechanic::getcounter()
{
    return count;
}
int mechanic::gethours(int x)
{
    return array[x].hours;
}
int mechanic::getmins(int x)
{
    return array[x].mins;
}
