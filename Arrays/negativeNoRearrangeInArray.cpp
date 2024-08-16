#include<iostream>
#include<bits/stdc++.h>
#include<algorithm>

using namespace std;

int * Rearrangenagative( int *ptr, int n)
{
     int i = 0;
     int j = n-1;

     while(i<j)  // continue loop until i < j 
     {
         while (ptr[i]<0) // if element at left is -ve go for next from start
         {
            i++;
         }
         while( ptr[j]>= 0) // if if element at right is +ve go for previous form last
         {
            j--;
         }
         if(i<j) //swap the element found at i is +ve and -ve at j right
         {
             swap(ptr[i],ptr[j]);
         }  

     }
     return ptr;


}

int main()
{
     int Array [] = {7,-1,3,5,-4,-6,8,-10,-2};

     int n = sizeof(Array)/sizeof(Array[0]);

 //    int *p = Rearrangenagative(Array , n);

     for (int i = 0 ; i < n ; ++i)
     {
           cout << Array[i] <<", ";
     }

     cout<<"\n";


     int *p = Rearrangenagative(Array , n);  // function call

     cout << " list after -ve elements on left side \n";

     for (int i = 0 ; i < n ; ++i)
     {
           cout << p[i] <<", ";
     }
}