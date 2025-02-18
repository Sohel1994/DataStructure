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

void deletion_in_list( int pos)
{
     node *p = nullptr;
     node *q = nullptr;

     p = start;
     if (pos == 1)
     {
         start = start->next;
         if(start != nullptr)
         {
         start->prev = nullptr;
         }
         delete p;
     }
     else
     {
           
           for (int i = 0 ; i < pos - 1 ; i++)
           {
                q = p ;
                p = p->next;
                  
           }
            q->next = p->next; 
            if(p->next != nullptr)
            {
                p->next->prev = q;
            } 
            delete p;
            
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

     deletion_in_list(2);

     display(start); 
     
}