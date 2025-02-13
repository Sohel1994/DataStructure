#include<iostream>
#include<bits/stdc++.h>

using namespace std;

struct node
{
    int data ;
    node *next;

    node(int n):data(n),next(nullptr)
    {

    }
};

struct node * start = nullptr;

void insert_at_start_circular( node * p)
{
     node *t = new node(321);
     
     if ( start == nullptr)
     {
         start = t;
         t->next = start; 
     }
     
     else 
     {
        while ( p->next  != start)
        {
            p = p->next;
        }
        t->next= start; 
        p->next = t;
     }
}

void insert_at_given_pos_circular( int pos)
{
     node *t = new node(123);
     node *p = nullptr ;

     if ( pos == 0)
     {
        if ( start == nullptr)
        {
              start = t ;
              start->next = start;
        }
        else
        {
             p = start;
             while( p->next != start )
             {
                p = p->next;
             }
             p->next = t;
             t->next = start;
             start  = t;
        }

     }

     else 
     {
         p = start;
         for ( int i = 1 ; i < pos-1; i++)
         {
            p = p->next;
         }
         t->next = p->next;
         p->next = t;

     }
}

void display(node *p)
{
    do{
        cout<< p->data << "\n";
        p = p->next;

    }while(p != start);

}

int main()
{
    start = new node(1);
    start->next = new node(2);
    start->next->next = new node(3);
    start->next->next->next = new node(4);
    start->next->next->next->next = new node(5);
    start->next->next->next->next->next = start;

    display(start);
    
    insert_at_start_circular(start);

    display(start);

    // cout << "==================\n";

    // insert_at_given_pos_circular(0);

    // display(start);
    



}