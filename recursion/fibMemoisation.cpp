#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int fib( int n)
{

     if (n<=1)
     {
        return n;
     }
     
     else
     {
        return fib(n-2) + fib(n-1);
     }
}

// using loop 

int fibloop(int n)
{
       int t1 = 0 ;
       int t2 = 1;
       int sum;
       for (int i = 2 ; i<= n ; i++)
       {
           sum  = t1 + t2;
           t1 = t2;
           t2 = sum ;
       } 
       return sum;
}

// Memoization is the method to maintain an array
// for recursive call for same parameter kown as excessive recursion. 

int F[10];

int fibMemoisation(int n)
{
      if ( n <= 1)
      {
         F[n] = n;  // f(0) and f(1) call multiple times;
         return n;
      }

      else
      {
        if( F[n-2] == -1)
        {
            F[n-2] = fibMemoisation(n-2); 
        }
        if( F[n-1] == -1)
        {
            F[n-1] = fibMemoisation(n-1); 
        }  
        return F[n-2]+F[n-1] ;
      }
}


int main ()
{
    //  int fibr = fib(10);
    //  cout << " fib series of number for recursion is :" << fibr << "\n";

    //  int fibl = fibloop(10);
    //  cout << " fib series of number for loop version is :" << fibl << "\n";

    for(int i = 0; i < 10; ++i) {
        F[i] = -1;   // initilaize with -1 becacuse 0 also return value for rercursive call.
    }
     int fibM = fibMemoisation(10);
     cout << " fib series of number for recursion is :" << fibM << "\n";

}