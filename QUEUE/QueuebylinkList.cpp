#include <iostream>
#include <bits/stdc++.h>
#include <stdexcept>
using namespace std;

struct node
{

        int data;
        node *next;
        node(int val) : data(val), next(nullptr)
        {
        }
};

class Queue
{
        node *first;
        node *Last;

public:
        Queue()
        {
                first = nullptr;
                Last = nullptr;
        }

        ~Queue()
        {
                while (!empty())
                {
                        pop();
                }
        }

        bool empty()
        {
                return first == nullptr;
        }

        bool full()
        {
                node *temp = new node(0);
                return temp == nullptr;
                delete temp;
        }

        void push(int x)
        {
                if (!full())
                {
                        node *temp = new node(x);
                        if (first == nullptr)
                        {
                                first = Last = temp; // very first node in queue
                        }
                        else
                        {
                                Last->next = temp;
                                Last = temp;
                        }
                }

                else
                {
                        cout << "queue is full\n";
                }
        }

        void pop()
        {
                if (!empty())
                {
                        node *temp = first;
                        first = first->next;
                        delete temp;
                }
                else
                {
                        cout << " queue is empty \n";
                }
        }

        void display()
        {
                node *p = first;
                while (p != nullptr)
                {
                        cout << p->data << "\n";
                        p = p->next;
                }
        }

        int front()
        {
                if (!empty())
                        return first->data;
                throw out_of_range("Queue is empty");
        }

        int back()
        {
                if (!empty())
                        return Last->data;
                throw out_of_range("Queue is empty");
        }
};

int main()
{
        Queue q;

        q.push(1);
        q.push(2);
        q.push(3);
        q.push(4);
        q.push(5);

        q.display();

        q.pop();
        q.pop();
        q.pop();

        q.display();
}