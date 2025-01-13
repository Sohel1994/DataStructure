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

int minelementoflist(struct node *ptr)
{
    int min = INT_MAX;
    while(ptr != nullptr)
    { 
         if (ptr->data < min)
          min = ptr->data;
         ptr = ptr->next;
    }

    return min;

}

int Recursive_minelement_list(struct node *ptr)
{
    int x = 0;
    
    if(  ptr != nullptr)
    {
        x = Recursive_minelement_list(ptr->next);
 
            if ( x < ptr->data )
            {
                return x;
            }
            else
            {
                return ptr->data;
            }
        
       // return  x < ptr->data ? x : ptr->data ;
    }

    else
        return INT_MAX ;  // when node point  p == nullptr
}

int maxelementoflist(struct node *ptr)
{
    int max = INT_MIN;
    while(ptr != nullptr)
    { 
         if (ptr->data > max)
          max = ptr->data;
         ptr = ptr->next;
    }

    return max;

}

int Recursive_maxelement_list(struct node *ptr)
{
    int x = 0;
    
    if(  ptr != nullptr)
    {
        x = Recursive_maxelement_list(ptr->next);

      /* 
            if ( x > ptr->data )
            {
                return x;
            }
            else
            {
                return ptr->data;
            }
     */
        
        return  x > ptr->data ? x : ptr->data ;
    }

    else
        return INT_MIN ;  // when node point  p == nullptr
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

     display();

     int max = maxelementoflist(start);
     cout<< " max element of the list is : " << max << "\n";

     int Rmax = Recursive_maxelement_list(start);
     cout<< " max element of the list recursively is : " << Rmax << "\n";

     int min = minelementoflist(start);
     cout<< " min element of the list is : " << min << "\n";

     int Rmin = Recursive_minelement_list(start);
     cout<< " min element of the list recursively is : " << Rmin << "\n";


}