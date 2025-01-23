#include<iostream>
#include<bits/stdc++.h>

using namespace std;

struct node
{
    int data;
    node *next;

    node ()
    {
        data = 0 ;
        next = nullptr;
    }

    node(int n )
    {
        data = n;
        next = nullptr;
    }

    ~node()
    {
        next = nullptr;
    }

};

struct node *start = nullptr;

void circularList(int n)
{
      
    node *temp = new node(n);
    
    if(start== nullptr)
    {
            start = temp;
            start->next = start;
    }
    else 
    {
        node *p = start;
        while( p->next != start)
        {
            p = p->next;
        }

        p->next = temp;
        temp->next = start;
    }

}

void display()
{
    node *p = start;
    do {
        cout << p->data << "\n";
        p= p->next;
    }while(p != start);
}

void recurDisplay(node *p)
{
      static int flag = 0;

      if ( p != start || flag == 0) // at start p == start thats why we maintain a static flag with or condition.
      {
          flag = 1;
          cout << p->data << "\n";
          recurDisplay(p->next);
      }
}

int main()
{
//    circularList(1);
//    circularList(2);
//    circularList(3);
//    circularList(4);
//    circularList(5);


   start = new node(1);
   start->next = new node(2);
   start->next->next = new node(3);
   start->next->next->next = new node(4);
   start->next->next->next->next = new node(5);
   start->next->next->next->next->next = start;

  // display();

  recurDisplay(start);

  

}