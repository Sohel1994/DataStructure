#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
 
      int A[10] = {3, 5 , 7 , 8 , 8 , 10 , 15 , 15 , 15 ,20 };

      int lastDuplicate = 0;
      for ( int i = 0 ; i < 10 ; i++)
      {
          if ( A[i] == A[i+1] && A[i] != lastDuplicate)
          {
               cout << " duplicate element in array is : "<< A[i] << "\n";
               lastDuplicate = A[i];    // to avoid duplicate element appers more than once        
          }
      }



}