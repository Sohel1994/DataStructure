#include<iostream>
#include<bits/stdc++.h>
#include<string>
using namespace std;

int *Reverese ( int *ptr , int n)
{

     int  B[n];

      for (int i = n-1 , j = 0 ; i>=0 ; i--,j++ )
      {
           B[j] = ptr[i]; 
      }

      for ( int k = 0 ; k < n ; k++ )
      {
         ptr[k] = B[k]; 
      }
      return ptr;

}

int * Reverse2( int *ptr , int n)
{
        for (int i = 0 , j = n-1 ; i<j ; i++ ,j-- )
        {                              // a = 20 , b = 10
             ptr[i] = ptr[i] + ptr[j]; // a = a+b ; // 20+10 = 30 a
             ptr[j] = ptr[i] - ptr[j]; // b = a-b ; // 30-10 = 20 b
             ptr[i] = ptr[i] - ptr[j]; // a = a-b ; // 30-20 = 10 a
        }

        // int temp;
        // for (int i = 0 , j = n-1 ; i<j ; i++ ,j-- )
        // {
        //      temp = ptr[i];
        //      ptr[i] = ptr[j];
        //      ptr[j] = temp;
        // }

        return ptr;
}

int * leftshift( int *ptr , int n)
{
          
          int temp = ptr[0];
          int i;
          for ( i = 0 ; i < n-1 ; ++i)
          {
              cout << " i:" << i ;
              ptr[i] = ptr[i+1];     
          }
          ptr[i] = temp;
          return ptr;

}

int * rightshift( int *ptr , int n)
{
          
          int temp = ptr[n-1];
          int i;
          for ( i = n-1 ; i > 0 ; --i)
          {
              cout << " i:" << i ;
              ptr[i] = ptr[i-1];     
          }
          ptr[i] = temp;
          return ptr;

}


int main()
{
       int A[] = {11,13,23,34,56,78,8,109};

       int Size = sizeof(A)/sizeof(A[0]);
       
    //    int *p =  Reverese( A , Size );
    //    cout<<" \n  Reverese: ";


        // int *p =  leftshift( A , Size );
        // cout<<" \n leftshift : ";

        int *p =  rightshift( A , Size );
        cout<<" \n rightshift : ";


        for ( int k = 0 ; k < Size ; k++ )
              cout << p[k] << ", " ;

}