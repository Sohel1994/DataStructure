#include<iostream>
#include<bits/stdc++.h>

using namespace std;

struct node{

    node *prev ;
    int data;
    node *next;

    node( int n) : prev(nullptr), data(n) , next(nullptr)
    {

    }
    
};

struct node * start = nullptr;


void creation( int *arr ,int n)
{
      start = new node(arr[0]);
      node *ptr = start;
      
      for (int i = 1 ; i < n ; i++ )
      {
            node * temp = new node(arr[i]);
            ptr->next = temp ;
            temp->prev = ptr;
            ptr = temp ;
      }
}

void display( node * dis)
{
     cout << "======= display  list =====\n";
     while (dis != nullptr)
     {
        cout << dis->data << "\n";
        cout <<" prev : " << dis->prev << "\n" ;
        cout <<" dis : " << dis << "\n" ;
        cout <<" next : " << dis->next << "\n" ;
        dis = dis->next;
        
     }
}

int main()
{
    //  start = new node(1);
    //  start->next = new node(2);
    //  start->next->prev = start;

    //  start->next->next = new node(3);
    //  start->next->next->prev = start->next;
   
    //  start->next->next->next = new node(4);
    //  start->next->next->next->prev = start->next->next;

    //  start->next->next->next->next = new node(5);
    //  start->next->next->next->next->prev = start->next->next->next;   

     int arr[] = { 1 , 2 , 3 , 4 , 5 };

     int n  = sizeof(arr)/ sizeof(arr[0]);
     
     creation ( arr , n);

     display(start); 
}
