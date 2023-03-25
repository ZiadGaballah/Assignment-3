#ifndef classqueue_h
#define classqueue_h
#include <iostream>
using namespace std;
template <class T>
class Queue {
public:
    Queue()
    {
        int size = 10;
        values= new T [size];
        max=size;
        front= 0;
        end= -1;
        count= 0;

    }
    ~Queue() { delete [] values; }    
    bool IsEmpty(void)
    {
        if (count!=0)
            return false;
        else
            return true;
    }
    bool IsFull(void)
    {
        if (count < max)
            return false;
        else
            return true;
    }
    bool Enqueue(T &x)
    {
        if (IsFull()) {
            cout << "Queue is full." << endl;
            return false;
        }
        else {
            end= (end + 1) % max;
            
            values[end] = x;
            count++;
            return true;
        }
    }
    T Dequeue()
    {
        if (IsEmpty()) {
            exit(EXIT_FAILURE);
            }
            else {
                T y;
                y=values[front];
                front= (front + 1) % max;
                count--;
                return y;
            }

    }
    
private:
    int front;
    int end;
    int count;
    int max;
    T *values;
};
#endif /* classqueue_h */
