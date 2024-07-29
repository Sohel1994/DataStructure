#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int power ( int m ,int n)
{
     if (n == 0)
     {
        return 1;
     }
     else 
     return power(m,n-1)*m ;
}

int powerloop(int m , int n)
{
     int p = 1;
    for (int i = 1 ; i<=n ; ++i)
    {
         p *= m ;
    }
    return p;
}

int poweroddcheck(int m , int n)
{
     if (n==0)
     {
        return 1;
     }

     else if (n % 2 == 0)
     {
       return poweroddcheck(m*m , n /2);
     }
     else
     return  m * poweroddcheck( m*m , (n-1)/2) ;



} 

int main()
{

    //   int s = power(2,4);
    //   cout <<" power of given no is : "<< s << "\n";

    //   int result = powerloop(3,2);
    //   cout <<" factloop result is : "<< result<< "\n";

      int oddcheckresult = poweroddcheck(4,3);
      cout <<" factloop result is : "<< oddcheckresult<< "\n";

}