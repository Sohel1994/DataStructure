#include<iostream>
#include<bits/stdc++.h>

using namespace std;

struct node{

    node *prev ;
    int data;
    node *next;

    node( int n) : prev(nullptr), data(n) , next(nullptr)
    {

    }
    
};

node * start = nullptr;

void reverse_list()
{
        node * p = start;
        node *temp = nullptr ;
        while(p != nullptr)
        {
            temp  = p->next;
            p->next = p->prev;
            p->prev = temp;

            if( p->prev == nullptr)
            {
                start = p ;
            }

            p = p->prev ;// next node  swaped with prev so for moving p to next node like this;
        }   

}

void display( node * dis)
{
     cout << "======= display  list =====\n";
     while (dis != nullptr)
     {
        cout << dis->data << "\n";
        cout <<" prev : " << dis->prev << "\n" ;
        cout <<" dis : " << dis << "\n" ;
        cout <<" next : " << dis->next << "\n" ;
        dis = dis->next;
        
     }
}



int main()
{
     start = new node(1);
     start->next = new node(2);
     start->next->prev = start;

     start->next->next = new node(3);
     start->next->next->prev = start->next;
   
     start->next->next->next = new node(4);
     start->next->next->next->prev = start->next->next;

     start->next->next->next->next = new node(5);
     start->next->next->next->next->prev = start->next->next->next;

     display(start); 

     reverse_list();

     display(start); 
     
}