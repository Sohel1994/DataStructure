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

void removeDuplictes()
{
    node *p = start;
    node *q = start->next;

    while (q!= nullptr)
    {
         if (p->data != q->data)
         {
             p = q;
             q = q->next;
         }
         else 
         {
            p->next = q->next;
            delete q ;
            q = p->next; 
         }
    }

}

void shrinkList()
{
       node *p = start;

       while (p->next != nullptr)
       {
            if ( p->data != p->next->data)
            {
                 p = p->next; 
            } 

            else
            {                
                 p->next = p->next->next;
            }
       }
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
     start->next->next = new node(2);
     start->next->next->next = new node(4);
     start->next->next->next->next = new node(4);

    display();

    cout << "list after removing duplictes \n";

  //  removeDuplictes();

    shrinkList();
    
    display();

}