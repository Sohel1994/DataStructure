#include<iostream>
using namespace std;

class Node
{
    public:
    int data;
    Node *next;
};

Node *START = NULL;

Node *createNode() // crating node function on heap
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
     START = temp; // creting node for start or adding node at begining.
  } 
  // when list is not empty create node pointer for traversing the list and attached node at the end of list. 
  else 
  {  
     t = START; 
     while(t->next != NULL)
     {
        t = t->next;
     }
     t->next = temp; // added node at the end of list
  }

}

void display( Node *dis)
{
   if(dis==NULL)
   {
     cout<< "list is empty"<<"\n";
   }
   else
   {
      while(dis->next!= NULL)
      {  
        cout<< " the list data " << dis->data<<"\n";
        dis=dis->next;
      }
      cout<< " the list data " << dis->data<<"\n";
   }

}
int main()
{
   insertNode();
   insertNode();
   insertNode();
   insertNode();

   display(START);

}

