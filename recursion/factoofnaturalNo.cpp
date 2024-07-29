#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int fact( int n)
{
     if (n==0)
     {
        return 1;
     }
     else 
     return fact(n-1)*n;

}

int factloop( int n)
{
    int s = 1;
    for (int i = 1 ; i<=n ; ++i)
    {
        s = s*i; 
    }
    return s;
}

int main()
{

      int s = fact(4);
      cout <<" fact of given no is : "<< s << "\n";

      int result = factloop(4);
      cout <<" factloop result is : "<< result<< "\n";

}
