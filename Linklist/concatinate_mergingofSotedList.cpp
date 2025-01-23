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

struct node *first = nullptr;
struct node *second = nullptr;


void conactinat_list( node * p , node *q)
{
        while (p->next != nullptr)
        {
            p = p->next;
        }

        p->next = q;
}

node * merging_of_list( node *p , node *q)
{
     node dumy(0);
     node *merge = &dumy;

     while ( p != nullptr && q != nullptr)
     {
          if(p->data < q->data)
          {
            merge->next = p;
            p = p->next;
          }
          else
          {
            merge->next = q;
            q = q->next;
          }
          merge = merge->next;
     }

     if ( p != nullptr)
     {
        merge->next = p;
     }
     if ( q != nullptr)
     {
        merge->next = q;
     }

     return dumy.next;
}


void display (node *disp)
{
      
      while ( disp != nullptr)
      {
           cout << disp->data << "\n";
           disp = disp->next;
      }
}

int main()
{

     first = new node(1);
     first->next = new node(3);
     first->next->next = new node(5);
     first->next->next->next = new node(7);
     first->next->next->next->next = new node(9);

     display(first);

     cout << "==================================================\n";

     second = new node(2);
     second->next = new node(4);
     second->next->next = new node(6);
     second->next->next->next = new node(8);
     second->next->next->next->next = new node(10);

     display(second);

    //  cout << "======================= concatinated list =========\n";

    //  conactinat_list(first ,second);
    
    //   display(first);

    cout << "======================= merging list =========\n";

    node * merge = merging_of_list(first, second);

    display(merge);

}