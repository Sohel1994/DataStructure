#include<iostream>
#include<bits/stdc++.h>
#include<string>
using namespace std;

int *insertElement( int *p , int n , int elem)
{
    // list is sorted one
     int i = n-1;
     while ( i>= 0 && p[i] > elem)
     {
         p[i+1] = p[i]; // right shift
         --i;

     }
     p[i+1] = elem;

     return p;
}

bool isArraysorted ( int *p , int n)
{
     
     for (int i = 0 ; i < n-1 ; ++i) // loop will execute untill before last element
     {
        if ( p[i] > p[i+1])
        return false;
     }
     return true;
}

int main()
{
   
     int Arr[] = {11,13,24,34,56,78,98,109};
 
     int n = sizeof(Arr)/sizeof(Arr[0]);

// ================================================================================================================//

// insert element in sorted list

    //  int element;

    //  int *ptr = new int[n+1]; //for incresed length of array after inserting
     
    //  //copy element of Arr to ptr dynmic allocation;
    //  for (int i = 0 ; i < n ; i++)
    //  {
    //     cout << Arr[i] << ", " ;
    //     ptr[i] = Arr[i];
    //  }

    //  cout<< "\ntake user input from user "<<"\n";
    //  cin>>element;

    //  ptr = insertElement(ptr,n,element); // ptr 
    
    //  cout << "list with inserted new element are in ptr"<<"\n";

    //  for (int i = 0 ; i < n+1 ; ++i)
    //  {
    //        cout << ptr[i] << ", " ;
    //  }
    //  cout << "\n";

    //  // delete dynamically alocated memory
    //  delete[]ptr;

//===================================================================================================================//

     // is array sorted 

     if(isArraysorted(Arr,n))
     {
        cout <<" array is sorted " << "\n";
     }
     else
     cout <<" array is not sorted " << "\n";





//===================================================================================================================//
}