#include<iostream>
#include<bits/stdc++.h>

using namespace std;

struct node
{
    int data;
    struct node *next;

    node(int n) : data(n) , next(nullptr)
    {

    }

};

struct node *head = nullptr;

struct node *start = nullptr;

void display( struct node *p)
{
     while( p != nullptr)
     {
         cout << p->data << "\n";
         p = p->next;
     }
}

void addatstart( struct node *p)
{
      struct node *temp = new node(89);
      
      if ( p == nullptr)
      {
        cout << "list is empty ";
      }
      else
      {
         temp->next = start ;
         start = temp;
      }
}

void add_at_given_pos( struct node *p , int pos)
{
      struct node *temp = new node(11111);

      for (int i = 0 ; i != pos && p ; i++)
      {
          p = p->next;
      }

      temp->next = p->next;
      p->next = temp;
      
}

void add_at_end( struct node *p )
{
     struct node *temp = new node(321);

     while( p->next != nullptr)
     {
           p = p->next;
     }

     p->next = temp;
}


void add_in_sorted_list( struct node *p)
{
      struct node *tail = nullptr;
      
      struct node *temp = new node ( 7 );

      while ( p != nullptr && p->next->data < temp->data)
      {
           p = p->next ;
      }

      temp->next = p->next;
      p->next = temp;


     
}

void rotate_list_palace(int place)
{

     node *p = head;
     node *q = head;

     while ( p->next != nullptr)
     {
          p  = p->next;
     }

      p->next = head;
     
     for (int i = 0 ; i < place-1 ; i++)
     {
         q = q->next;
     }
     
     head = q->next;
     q->next = nullptr;
     
     

}

int main()
{
     start = new node(7);
     start->next = new node(37);
     start->next->next = new node(15);
     start->next->next->next = new node(232);
     start->next->next->next->next = new node(9);

     addatstart(start);
     add_at_given_pos(start , 2);
     add_at_end(start);

     display(start);


     ///////////////////////////////////////////////////////////////////////////////////////

     cout << "\n ==============================================\n";

     head = new node(1);
     head->next = new node(3);
     head->next->next = new node(5);
     head->next->next->next = new node(9);
     head->next->next->next->next = new node(11);

//      add_in_sorted_list(head);

//      cout <<" sorted list is \n";
//      display(head);

    rotate_list_palace(3);

    display(head);


}