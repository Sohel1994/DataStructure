#include<iostream>
using namespace std;

 /*code referece taken by How to crate hash table Project list by Paul programmings*/

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
    void  removeItem( int ); //remove items from the hashtable[index]
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
        cout << "=============================="<<"\n";
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

void Hash::removeItem( int v)
{
     int index = fun_hash(v);
     item *deletePtr;
     item *t1;
     item *t2;

     // case for list is empty 
     if(hashtable[index]->value == 0) 
     {
        cout<<" hashtable at this index "<<index << "is empty \n";
     }

     // case for list contain only one value which is matched
     else if( hashtable[index]->value == v && hashtable[index]->next == NULL)  
    { 
      hashtable[index]->value = 0;
      cout << " Only matched item is removed from hashtable "<<"\n";
    }
    
    // case for list contain match item at the start
    else if( hashtable[index]->value == v)
    {
        deletePtr = hashtable[index];
        hashtable[index] = hashtable[index]->next;
        delete deletePtr;

        cout << " At start matched item is removed from hashtable "<<"\n";
    }
    
    // case for list cotain match item at 
    else    
    {
        t1 = hashtable[index];
        t2 = hashtable[index]->next;
        
        while( t2 != NULL && t2->value != v)
        { 
           
              t1 = t2 ;
              t2 = t2 ->next; // moving forward
        }
        
        if( t2 == NULL)
        {
            cout << "===========================\n" ;
            cout << " No item matche found in hashtable[index]\n";
            cout << "===========================\n" ;
        }
        else
        {
               deletePtr = t2; // matche item
               t2 = t2->next;
               t1->next = t2;
               delete deletePtr;
               cout<< v << " the value is removed from the hash table \n";
        }



    }

    //

}


int main()
{  
      
     Hash obj;

     obj.addItem(71);
     obj.addItem(63);
     obj.addItem(46);
     obj.addItem(47);
     obj.addItem(52);
     obj.addItem(21);
     obj.addItem(44);
     obj.addItem(12);
     obj.addItem(13);
     obj.addItem(42);

     obj.printTable();
     cout << "$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$\n";
     obj.printItemsintable(2); // print the item contain by hashtable[2]
     obj.removeItem(12);   // remove the item from hashtable[index]
     cout << "$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$\n";
     obj.printItemsintable(2); // again print the item contaian by the hashtable[2]
     
}