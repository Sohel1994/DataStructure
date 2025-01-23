#include<iostream>
#include<bits/stdc++.h>

using namespace std;

struct node
{
     int data;
     node *next;

     node(int i) : data(i), next(nullptr)
     {

     }
};

struct node *start = nullptr;


bool isLoop( struct node *loop)
{
    struct node *slow, *fast;
    slow = fast = loop;

    do{
        slow = slow->next;
        fast = fast->next;
        if (fast != nullptr) // for odd list 
        {
            fast = fast->next;
        }
        //fast = fast != nullptr? fast->next : nullptr;
    }while( fast && slow && fast != slow);

    return fast==slow ? true : false;
}

void display( struct node *disp)
{
     while ( disp != nullptr)
     {
        cout << disp->data<< "\n";
        disp = disp->next;
     }

    
}

int main()
{
    start = new node(1);
    start->next = new node(2);
    start->next->next = new node(3);
    start->next->next->next = new node(4);
    start->next->next->next->next = new node(4);

    // forming a loop  for checking purpose
    struct node *t1 = start->next->next;
   struct node *t2 = start->next->next->next->next;
                t2->next = t1;

  //  display(start);

    bool check = isLoop(start);

    if(check)
    {
         cout << " Loop in List \n";
    }
    else
    {
         cout << " no Loop in List \n";
    }
}