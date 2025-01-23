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

bool isListSorted()
{
       node *p = start;

       while(p->next != nullptr)
       {
           if(p->data > p->next->data)
           {
                return false;
           }
           p = p->next;
       }

       return true;
}

bool islistSorted_X()
{
    node *p = start;
     int x = INT_MIN;

     while (p != nullptr)
     {
           if( p->data < x )
           {
             return false;
           }
           x = p->data;
           p = p->next;
     }

     return true;
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
     start->next->next = new node(3);
     start->next->next->next = new node(4);
     start->next->next->next->next = new node(5);

    
      bool sorted = isListSorted();

    // bool sorted = islistSorted_X();

     if(sorted)
     {
        cout << " list is sorted \n";
     }

     if(!sorted)
     {
        cout << " list is not sorted\n";
     }

}