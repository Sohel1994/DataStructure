#include<iostream>
#include<vector>
using namespace std;


struct node { 
    int data;
    struct node *next;

    node(int n) : data(n), next(nullptr)
    {

    }
};

struct node *start = nullptr; 


void delete_at_start()
{

     node *p = start;
     
     start = start->next;

     delete p;

}

void delete_at_pos(int pos)
{
     node *p = start;
     node *tail = NULL;

     for (int i = 0 ; i < pos-1 && p ; i++)
     {
           tail = p;
           p = p->next;
     }
     tail ->next = p->next;
     delete p;
}


void delete_at_end()
{
    node *p = start;
    node *tail =  nullptr;
    while (p->next!=nullptr)
    {
        tail = p;
        p = p->next;
    }

    tail->next = nullptr;
    delete p;
    
}

void display ()
{
      struct node *disp = start;
      while ( disp != nullptr)
      {
           cout << disp->data << "\n";
           disp = disp->next;
      }
}

int main()
{
    //  int arr [] = { 1 , 2 , 3 , 4 , 5};

     start = new node(1);
     start->next = new node(2);
     start->next->next = new node(6);
     start->next->next->next = new node(4);
     start->next->next->next->next = new node(5);



     
     delete_at_start();

     display();


    cout << "\ndelete at given position =====\n";
     delete_at_pos (3);

     display();

     cout << "\ndelete at the end =====\n";
     delete_at_end ();

     display();

}