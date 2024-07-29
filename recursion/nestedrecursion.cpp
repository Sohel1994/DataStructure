#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int funN(int n)
{

     if( n > 100)
     {
        return ( n - 10);
     }
     else
     funN(funN(n+11));
}

int main()
{
    int r = 0;
    r = funN(30);
    cout << r << " ";
}