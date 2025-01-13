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

void create( int *ptr, int n)
{
    
    //  start = new node;
    //  start->data = ptr[0];
    //  start->next = nullptr;
    //  struct node *head = start;
    //  struct node *t;

    //  for (int i = 1 ; i < n ; i++)
    //  {
    //         t = new node;
    //         t->data = ptr[i];
    //         t->next = nullptr;
    //         head->next = t;
    //         head = t;
    //  }
      
}

int countnode(struct node *p)
{
    int count = 0 ;
    while(p != nullptr )
     {
         count++;
         p = p->next;
     }
     return count ;
}

int recursivecount(struct node *p)
{
      if (p != nullptr)
      {
        return recursivecount(p->next)+1; // passing address of next node;
                                          // result of next call added to the one;
      }
      else 
      return 0;  //  recursivecount(P->next) call is p = nullptr return 0 that is tail recursion.
}


int sumofnode(struct node *p)
{
    int sum = 0 ;
    while(p != nullptr )
     {
         sum = sum+p->data;
         p = p->next;
     }
     return sum ;
}

int sumofnoderecursively(struct node *p)
{
      if (p != nullptr)
      {
        return sumofnoderecursively(p->next)+p->data; // passing address of next node;
                                                      // result of next call added to p->data;
      }
      else 
      return 0;  //  sumofnoderecursively(P->next) call is p = nullptr return 0 that is tail recursion.
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

void recursivedisplay(struct node *ptr)
{
      if (ptr != nullptr )
      {
        cout <<  ptr->data << "\n"; 
        recursivedisplay(ptr->next);
        cout <<  ptr->data << "\n"; // reverse printing list
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


    // create(arr,5);
    
    //display();
    
   // recursivedisplay(start);

    int numberofnode = countnode(start);
    cout<< "numberofnode : " << numberofnode << "\n";

    int numberofnoderecursively = recursivecount(start);
    cout<< "numberofnoderecursively : " << numberofnode << "\n";

    // int addnode = sumofnode(start);
    // cout<< "addition of node data : " << addnode << "\n";

    int raddnode = sumofnoderecursively(start);
    cout<< "addition of node data by recursion : " << raddnode << "\n";

}