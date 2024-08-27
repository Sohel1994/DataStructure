#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int A[10] = { 6 , 3 , 5 , 3 , 7 , 9 , 5 , 6 , 10 , 3};

    for ( int i = 0 ; i < 10 ; i++)
    {
           int count = 1;
           if ( A[ i ] != -1)
           {
               for( int j = i+1 ; j < 10 ; j++)
               {
                     if ( A[i] == A[j])
                     {
                           count++;
                           A[j] = -1; // making sure not considering duplicate..
                     }
               }

               if (count>1)
               {
                  cout << A[i] << " appers " << count << " times" << "\n";

               }
           }



    }




}