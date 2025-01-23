
#include<iostream>
#include<bits/stdc++.h>

using namespace std;

class node
{
    int data;
    node *next;
    public:
    node(int n):data(n),next(nullptr)
    {

    }

    void display()
    {
        node *p = this;
        while (p != nullptr)
        {
            cout << p->data << "\n";
            p = p->next;
        }
    }

    void createList(int n)
    {
        node *t = new node(n);
        node *p = this;
        if(p == nullptr)
        {
             cout << "list is empty\n";
            //  p->data = t->data;
            //  p->next = t->next;
            p = t ;
        }
        else
        {
             while ( p->next != nullptr )
             {
                 p = p->next;
             }
             p->next = t;
        }
    }

  // Explicit method to delete the entire list
    void deleteList() {
        node *p = this; // Start from the current node
        while (p != nullptr) {
            node *temp = p->next; // Save the next node
            delete p;             // Delete the current node
            p = temp;             // Move to the next node
        }
    }

    // Destructor (optional, but does nothing here to avoid recursion)
    ~node() {
        // Do nothing; cleanup is handled explicitly by `deleteList()`.
        // This prevents unintended recursive behavior that could lead to segmentation faults.
    }
};


int main()
{
      node *start= new node(1);
      start->createList(2);
      start->createList(3);
      start->createList(4);
      start->createList(5);

      start->display();

      start->deleteList();
      start = nullptr;
    

}