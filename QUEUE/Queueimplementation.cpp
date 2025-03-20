#include <iostream>
#include <bits/stdc++.h>

using namespace std;

class Queueimplementation
{
private:
    int *q;
    int first;
    int last;
    int size;

public:
    Queueimplementation(int s = 1)
    {
        size = s;
        first = -1;
        last = -1;
        q = nullptr;
        q = new int[size];
    }
    ~Queueimplementation()
    {
        delete[] q;
    }

    bool full()
    {
        // return last == size - 1;

           return (last+1)%size == first; // for circular queue to manage space queueing and dequeing 
                                       // in same size of queue
    }

    bool empty()
    {
        return first == last;
    }

    void dequeue()
    {
        if (!empty())
        {
            //first++;
            //for circular list size management
            first = (first+1) % size;
        }
    }

    void enqueue(int x)
    {
        if (!full())
        {
            last++;
            q[last] = x;
        }
    }

    int front()
    {
        if (!empty())
        {
            // return q[first + 1];
            //for circular list size management
            first = (first+1) % size;
            return q[first];
        }

        throw out_of_range("Queue is empty");
    }

    int back()
    {
        if (!empty())
        {
            return q[last];
        }
        
        throw out_of_range("Queue is empty");
    }

    void display()
    {
        for (int i = (first) % size ; i <= last; i++)
        {
            cout << q[i] << " ";
        }
    }
};

int main()
{
    Queueimplementation q(5);

    q.enqueue(1);
    q.enqueue(2);
    q.enqueue(3);
    q.enqueue(4);
    q.enqueue(5);

    q.display();

    cout << "\n"<<q.front() << "\n";
    
     q.dequeue();

     q.display();
}
