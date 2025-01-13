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


struct node * search(struct node *p , int key)
{
        while( p != nullptr)
        {
            if( p->data == key)
            {
                return p;
            }
            p = p->next;
        }

        return nullptr;

}

struct node * Recursivesearch(struct node *p , int key)
{
      if( p == nullptr)
      {
        return nullptr;
      }

      if ( p->data == key)
      {
         return p;
      }

      return Recursivesearch(p->next , key); // return address of found node 
}

struct node * found_node_bring_on_first( struct node * p ,int key)
{
      struct node *tail = nullptr;

      while(p != nullptr)
      {
         if ( p->data == key)
         {
            tail->next = p->next;
            p->next = start ;
            start = p;
            return p;
         }
         tail = p ; 
         p = p->next;
      }
    return nullptr;
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
     start = new node(3);
     start->next = new node(37);
     start->next->next = new node(15);
     start->next->next->next = new node(232);
     start->next->next->next->next = new node(9);

    struct node *found = search(start , 7);
    if (found)
    {
        cout << " key is found "<<"\n";
    }
    else
    cout << " key not found "<<"\n";
    

    found =  Recursivesearch(start , 15);
    if (found)
    {
        cout << " key is found "<<"\n";
    }
    else
    cout << " key not found "<<"\n";

    display();

    struct node *first = found_node_bring_on_first(start , 11);
    
    cout<< "after found_node_bring_on_first \nlist is \n";
    display();

}