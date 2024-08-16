#include<iostream>
#include<bits/stdc++.h>
#include<string>
using namespace std;

int *mergethelist(int *pC, int *pA , int *pB , int m , int n)
{
         int i= 0 , j = 0 ;
         int k = 0;

         while ( i < m && j < n )
         { 
            if ( pA[i] < pB[j])
            {
                pC[k++] = pA[i++];
            }
            else
            {
                pC[k++] = pB[j++];
            }

         }

         for (;  i < m ; i++ ) // if elements remain in pA array
         {
            pC[k++] = pA[i];
         }

         for (;  j < n ; j++ ) // if elements remain in pB array
         {
            pC[k++] = pB[j];
         }


     return pC;

    
}


int main()
{

     int A [] = { 2,6,10,15,25};
     int B [] = { 3,4,7,8,20,32,45};

     int m =  sizeof(A)/sizeof(A[0]);
     int n =  sizeof(B)/sizeof(B[0]);

     int *p = new int [m+n];
     
     p = mergethelist( p , A , B , m, n);

    
    for (int i = 0 ; i < m+n ; ++i)
    {
          cout << p[i] << ", ";
    }



}