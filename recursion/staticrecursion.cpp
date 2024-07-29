#include<iostream>
#include <bits/stdc++.h>
using namespace std;

int fun (int n)
{
    static int x;
    if (n>0)
    {

    x++;
    cout<< " n :"<< n << " ";
    return fun (n-1) + x;
    }
    return 0;
}

int main()
{

 int result =   fun(3);
 cout << "result " << result ;
    
}