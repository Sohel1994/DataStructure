#include<iostream>
#include<bits/stdc++.h>
using namespace std;

struct node
{
    int data ; 
    node *next;
    node(int n) : data(n) , next(nullptr)
    {

    }
};

struct node *start = nullptr;

void display ( node *p)
{
    cout << " === display list === \n";
    do 
    {
         cout << p->data << "\n";
         p = p->next;
    }while(p != start);

}

void delete_from_circular(int pos)
{
     node *p = nullptr;
     node *q = nullptr;
     if ( pos == 1)
     {
        p = start;
        while ( p->next != start)
        {
             p = p->next;
        }
        if (p == start)
        {
            delete start;
            start = nullptr;
        }
        else 
        {
            p->next = start->next;
            delete start;
            start = p->next;
        }
        
     }
     else
     {
        p = start;
        for (int i = 0 ; i < pos-1 ; i++)
        {
            q = p;
            p = p->next;
        }
        q->next = p->next;
        delete p;
        p = nullptr;
     }
}

int main()
{
     start = new node(1);
     start->next = new node(2);
     start->next->next = new node(3);
     start->next->next->next = new node (4);
     start->next->next->next->next = new node(5);
     start->next->next->next->next->next = start; 

     display(start);

     delete_from_circular(1);

     
     display(start);
}