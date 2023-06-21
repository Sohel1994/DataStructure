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

void insertNodeAtStart() // adding node at the start 
{
  Node *temp;
  temp = createNode(); // creating node 
  cout<<" please entre the value for list ";

  cin>>temp->data;
  temp->next = NULL; 
  
  if(START==NULL) // if list is empty 
  {
     cout<<" The list is empty"<<"\n";
  } 

  else 
  {
     temp->next = START;
     START = temp; 
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

bool searhElement( Node *head , int key)
{
    Node *current;
    current = head;
    
    while(current!=NULL)
    {
        if(current->data == key)
          return true;
          current = current->next;
    }
    return false;

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

   int x ;
   cout<<" Enter the element needs to find in the list "<<"\n";
   cin>> x;

   if(searhElement(START,x))
   {
   cout<<"element found in the list "<<"\n";
   }
   else
   {
   cout<<"element not found in the list "<<"\n";
   }

   
   // // deletion of node at the start
   // atStartDeletionNode();
   // cout<<" =================================== "<<"\n";
   // cout<<" the list is after deletion at start :"<<"\n";
   // display();
   
   // // deletion of node at the end.
   // atEndDeletionNode();
   // cout<<" =================================== "<<"\n";
   // cout<<" the list is after deletion at end : "<<"\n";
   // display();

   // insertNodeAtStart();
   // insertNodeAtStart();
   // insertNodeAtStart();
    
   
   display();
}

