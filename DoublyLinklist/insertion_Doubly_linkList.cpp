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

void insertion_in_list( int pos)
{
     node *p = nullptr;
     node *temp = new node (3622668);

     if (pos == 0)
     {
          if (start == nullptr)
          {
            start = temp;
          }
          else
          {
           
             temp->next = start;
             start->prev = temp;
             start = temp;
          }
     }
     else
     {
           p = start;
           for (int i = 0 ; i < pos-1 ; i++)
           {
                p = p->next;
                  
           }

            temp->next = p->next; 
            temp->prev = p;
            if(p->next != nullptr)
            {
                p->next->prev = temp;
            } 
            p->next = temp ; 
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

     insertion_in_list(1);

     display(start); 
     
}