#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
 
      int A[10] = {3, 5 , 7 , 8 , 8 , 10 , 15 , 15 , 15 ,20};
       
      int high = 20;

      int hash[21] = {0};

      for(int i = 0 ; i < 10 ; i++)
      {
         hash[A[i]]++;
      }

      for (int i = 0; i <= 20 ; i++)
      {
         if ( hash[i] > 1)
         {
             cout << "element: "<< i << " appers : " << hash[i] << " times"<< "\n";
         }
      }
      

}