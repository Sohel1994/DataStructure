#include<iostream>
using namespace std;

class Node
{
    public:
    int data;
    Node *next;
};

Node *START = NULL;

Node *createNode() // creating on heap
{
   Node *n = new Node();
   return n;
}

void insertNode()
{

  Node *temp, *t ; 
  
  temp = createNode(); // creating node 
  cout<<" please entre the value for list ";

  cin>>temp->data;
  temp->next = NULL; 

  if(START==NULL) // if list is empty 
  {
     START = temp; // adding node at begining.
  }  
  else // adding the node at the end
  {  
     t = START; 
     while(t->next != NULL)
     {
        t = t->next;
     }
     t->next = temp; // added node at the end of list
  }

}

void atStartDeletionNode() //deletion of node at the start
{
   Node *t;
   if (START == NULL)
   {
      cout<<" The list is empty"<<"\n";
   }
   else 
   {
      t=START;
      START=START->next;
      delete t;
   }
   

}

void atEndDeletionNode()  //  deletion of node at the end
{
  
   Node *t;
   Node *t1;
   if ( START == NULL)
   {
      cout<<" the list is empty "<<"\n";
   }

   else if(START->next == NULL) // only node of the list deleted
   {
         START = NULL;
         delete START;
         cout<<"\n only list of the node deleted";
   }

   else // last node of node deleteded
   {
     t = START;
     while(t->next!=NULL)
     {
       t1 = t;
       t  = t->next;
     }
     t1->next = NULL;
     delete t; 
   }

}

void display( )
{
   Node *t;
   if(START==NULL)
   {
     cout<< "list is empty"<<"\n";
   }
   else
   {
      t=START;
      while(t!= NULL)
      {  
        cout<< " the list data " << t->data<<"\n";
        t=t->next;
      }
   }   
}

int main()
{
   insertNode();
   insertNode();
   insertNode();
   insertNode();
   insertNode();

   display();
   // deletion of node at the start
   atStartDeletionNode();
   cout<<" =================================== "<<"\n";
   cout<<" the list is after deletion at start :"<<"\n";
   display();
   
   // deletion of node at the end.
   atEndDeletionNode();
   cout<<" =================================== "<<"\n";
   cout<<" the list is after deletion at end : "<<"\n";
   display();
}

