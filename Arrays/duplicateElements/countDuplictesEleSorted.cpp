#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
 
      int A[10] = {3, 5 , 7 , 8 , 8 , 10 , 15 , 15 , 15 ,20 };

      for ( int i = 0 ; i < 10 ; i++)
      {
            if ( A[i] == A[i+1])
            { 
                  int j = i+1;
                  while( A[i] == A[j])
                  {
                     j++;
                  }
                  cout << A[i] << ": appers "<< j-i << " times "<<"\n";
                  i = j-1; // move i up to last dupliate element found
            }

      }


}