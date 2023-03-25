#include <iostream>
#include <cstring>
#include "Person.hpp"
#include "customer.hpp"
#include "mechanic.hpp"
#include "classqueue.h"
#include <fstream>
using namespace std;
int main()
{
    mechanic m1[3];
    string name;
    int age;
    int id;
    ifstream file;
    file.open("mechanic.txt");
    while(!file.eof())
    {
        for(int i=0;i<3;i++)
        {
            file >> name;
            file >> age;
            file >> id;
            m1[i].setname(name);
            m1[i].setage(age);
            m1[i].setID(id);
            
        }
    }
    file.close();
    customer x[5];
    string name2;
    int ages;
    int hour;
    int min;
    ifstream file2;
    file2.open("customer.txt");
    while(!file2.eof())
    {
        for(int r=0;r<5;r++)
        {
            file2 >> name2;
            file2 >> ages;
            file2 >> hour;
            file2 >> min;
            x[r].setname(name2);
            x[r].setage(ages);
            x[r].setappointment(hour,min);
        }
    }
    file2.close();
    int z=0;
    for(int j=0;j<5;j++)
    {
        
        if(j>=3)
        {
            
               if(m1[z].isavailable(x[j].getappointh(),x[j].getappointm())== 1)
               {
                   m1[z].setappoint(x[j].getappointh(),x[j].getappointm());
                   x[j].setMecID(z);
                   z++;
               }
                else
                {
                    if(m1[z+1].isavailable(x[j].getappointh(),x[j].getappointm())== 1)
                    {
                        m1[z].setappoint(x[j].getappointh(),x[j].getappointm());
                        x[j].setMecID(z+1);
                        z++;
                    }
                }
               
            }
        else
        {
            if(m1[j].isavailable(x[j].getappointh(),x[j].getappointm())==1)
            {
                m1[j].setappoint(x[j].getappointh(),x[j].getappointm());
                x[j].setMecID(j);
                
            }
            
            else{
                    cout << "No mechanic available for " << x[j].getname() << endl;
                
                }
        }
    }
    
 Queue <customer> s;
    for(int k=0;k<5;k++)
    {
        customer T;
        for(int u=0;u<5;u++)
        {
            if(x[k] < x[u])
            {
                T=x[k];
                x[k]=x[u];
                x[u]=T;
            }
        }
           
    }
    for(int i=0;i<5;i++)
    {
        s.Enqueue(x[i]);
    }
    
    for(int a=0;a<5;a++)
    {
        customer m[5];
        m[a]= s.Dequeue();
        cout << "MR." << m[a].getname() << " at the appointment " << m[a].getappointh() << ":" << m[a].getappointm() << " to the mechanic " << m1[m[a].getMecID()].getname() << endl;
    }
}

    

