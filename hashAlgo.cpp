#include<iostream>
using namespace std;

struct item{
    int value;
    struct item *next;

};

class Hash
{
    static const int tableSize = 10; // it allows define table size and use right way into class defination.
    item *hashtable[tableSize]; // array of pointers to hashtbles , number of pointers are equal to tabelSize.

    public:
    Hash() //default constuctor for intialization of hashtable 
     {  
        for(int i = 0 ; i< tableSize ; i++)
         {
            hashtable[i] = new item;
            hashtable[i]->value = 0 ;
            hashtable[i]->next = NULL;
         }

     }

    int fun_hash( int v) // creating hashging index for each item 
    {
         int index ;  
         index = v % 10;   // same index hash item stored into same index table
         return index;  
    }

   
// adding item to the hashtabel[index] like adding new node to the list
    void addItem( int v)
    {
        int index = fun_hash(v); // 

        if(hashtable[index]->value == 0) // if hashtable[index] list is empty create list
        {
            hashtable[index]->value = v;
            hashtable[index]->next = NULL;
        }
        
        // if list is not empty of hashtabel[index] 
        else 
        {
               item *ptr = hashtable[index];
               item *n = new item;  // creating a new node to add in the list of index.
               n->value = v;
               n-> next = NULL;
               while(ptr->next != NULL)
               {
                   ptr = ptr->next;   
               }
               ptr->next = n;
        }   

    }
    int numberofItems(int ); // no of items in the hashtable[index]
    void  printTable();   // printing  hashtable[index] information.
    void  printItemsintable (int); // print items of the hashtable[index]
};

int Hash :: numberofItems(int index) // no of items in hashtabel[index]
{
    
     int count = 0;
     if ( hashtable[index]->value == 0 )
     { 
        return count;
     }
     else
     {
        item* ptr = hashtable[index];
        while ( ptr != NULL )
        {      
               count ++;
               ptr = ptr->next;
        }
     } 

     return count;

}

void Hash :: printTable() // print hashtable[index] information
{

    int numbers;
    for (int i = 0 ; i< tableSize ; i++)
    {
        numbers = numberofItems(i);
        cout << "=============================="<<"\n";
        cout << " AT index ["<<i<<"]"<<"\n";
        cout << " value :" <<hashtable[i]->value<< "\n";
        cout << " No of items in this table: " << numbers << "\n"; 
    } 

}

void Hash:: printItemsintable(int index)
{
     item *ptr;
     ptr = hashtable[index];
     if( ptr->value == 0)
     {
        cout << "there is no item in this table "<< "\n";
     }

     else
     {
        cout<< "AT Index :"<<index<<"\n"; 
        while(ptr!=NULL)
        {
            cout << "-----------------------------" <<"\n";
            cout << "value" <<ptr->value <<"\n";
            cout << "-----------------------------" <<"\n";
            ptr = ptr->next; 
        }
     }

}

int main()
{  
      
     Hash obj;

     obj.addItem(41);
     obj.addItem(43);
     obj.addItem(43);
     obj.addItem(47);
     obj.addItem(43);
     obj.addItem(45);
     obj.addItem(43);
     obj.addItem(42);
     obj.addItem(43);
     obj.addItem(42);

     obj.printItemsintable(4);

}