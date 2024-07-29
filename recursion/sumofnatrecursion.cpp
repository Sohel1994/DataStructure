
#include<iostream>
#include <bits/stdc++.h>
using namespace std;

int fun( int n);

int main()
{
    
       int r = 0;
       r = fun(10); // using recursion;
       cout << " " << r <<"\n";


       // formula for n natural no is 
       // (n*(n+1))/2
       int n = 10;
       int result = (n*(n+1))/2;
       cout << result << "\n";
       // formula for n natural no is 
       // (n*(n+1))/2
}

int fun( int n)
{

     if (n == 0)
     {
        return 0; // max value;
     }
     else 
     return  fun(n-1)+n;
}