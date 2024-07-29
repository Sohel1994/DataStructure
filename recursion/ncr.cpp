#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int fact( int n)
{

     if (n == 0)
     return 1;
     else 
     return fact(n-1) * n;
}

int ncr( int n , int  r)
{
    int numr = fact(n);
    int denom = fact(r) * fact(n-r);

    cout << " numr :"<< numr << ", denom :" << denom << " \n";
   
   int comb = numr / denom ;
   return comb;

}

int rNCR (int n , int r)
{
       if((n == r) || (r == 0))
       {
          return 1;

       }   
       else 
       {
          return rNCR(n-1 , r-1) + rNCR(n-1,r ) ;
       }
}




int main ()
{

     int comb = ncr( 4 , 2);
     cout << " ncr is " << comb ;

    cout << " \n recursive  \n";
     comb = rNCR( 4 , 2);
     cout << " rNCR is " << comb ;
}