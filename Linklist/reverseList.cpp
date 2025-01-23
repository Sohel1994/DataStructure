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



void display ()
{
      struct node *disp = start;
      while ( disp != nullptr)
      {
           cout << disp->data << "\n";
           disp = disp->next;
      }
}

void reversingByElements()
{
     int arr[5] = {0};
     int i = 0;
     node *p = start;
     while ( p != nullptr)
     {
         arr[i] = p->data;
         p = p->next;
         i++;      
     }

     p = start;
     i--;
     while ( p != nullptr)
     {
         p->data = arr[i--];
         p = p->next;
     }
}

// sliding pointers
void reverseByLinks()
{
        node *p = start;
        node *q = nullptr;
        node *r = nullptr;

        while(p != nullptr)
        {
             r = q;
             q = p; 
             p = p->next;
             q->next = r;
        }
        start = q;

}

void recursiveReverseList(node *q , node *p)
{
    if ( p != nullptr)
    {
        recursiveReverseList(p , p->next); // first call q is null
        p->next = q; //
    }
    else
    {
         start = q;
    }
}

int main()
{
    //  int arr [] = { 1 , 2 , 3 , 4 , 5};

     start = new node(1);
     start->next = new node(2);
     start->next->next = new node(3);
     start->next->next->next = new node(4);
     start->next->next->next->next = new node(5);

    display();

    // reversingByElements();

    // cout << "reversing by elements \n";

    // reverseByLinks();

    // cout << "reversing by links \n";

    // display();


    recursiveReverseList(nullptr , start);

    cout << "reversing by recursion \n";

    display();

    
}