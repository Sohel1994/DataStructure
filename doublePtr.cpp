#include<iostream>
#pragma pack (1) //structure padding ,stucture size initilization in multiple of 2.
                 //so it will optimize the size.
using namespace std;

int ** addition( int **p);

typedef struct student
{
   int rollNo;
   int a;
   char name[10];
    
  
};

int main ()
{
   
   int a = 30;
   int *ptr, **rec;
   ptr = &a;

   cout<< "address of &a : " << &a <<"\n";

   cout<< "value of a : "<< *ptr <<"\n";

   cout<< "address of pointer &ptr : "<<&ptr <<"\n";

   rec = addition(&ptr); // Passing the address of ptr variable 
   cout<<**rec << "\n";
   
//   student i;
//   cout<< sizeof(i)<< "\n"; //size of empty stucture is 1 
//   cin >> i.rollNo;
//   cin >> i.name;
 
//   cout<<"roll no "<<i.rollNo << "\n"<< "name is "<< i.name;

 
}

int ** addition( int **p)
{
   int n = 40;

   cout<<"In addition function  p : "<< p <<"\n";
   cout<<"In addition function  *p is &a : "<< *p <<"\n";

   **p = **p+n;
   return p;
}