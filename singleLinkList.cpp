#include<iostream>
#include<vector>
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

void findMiddleNode(Node *head) // find the middle node of list.
{

    vector<int> v;

    if(head==NULL)
    {
      cout<<" the list is empty"<<" \n ";
    }   
    
    while(head!=NULL)
    {
      v.push_back( head->data);
      head=head->next;
    }
    cout<<"vector size is :" <<v.size();
    cout<<"Middle Value Of Linked List is :";
    cout<<v[v.size()/2]<<endl;

}

int main()
{
    int i;
    cout<<" enter the value for no nodes required in list : "<<"\n";
    cin >> i;
    for ( ;i>0 ; i--)
    {
       insertNode();
    }


   display();

   findMiddleNode(START);
}

