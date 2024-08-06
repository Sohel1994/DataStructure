
#include<iostream>
#include<bits/stdc++.h>
#include<string>
using namespace std;

int getElement( int *p  , int n , int index)
{
    if ( index >= 0 && index <=n )
    {
        return p[index];
    }
    else 
    return -1;
}

void setElement (int *p , int n ,  int index)
{
     if ( index >= 0 && index <=n )
    {
         p[index] = 123;
    }
}

int minElement( int *p , int n )
{
    int min = p[0];
    for (int i = 0 ; i < n ; ++i)
    {
         if( min > p[i])
         {
             min = p[i];
         }
         
    }
    return min;
}

int maxElement( int *p , int n )
{
    int max = p[0];
    for (int i = 0 ; i < n ; ++i)
    {
         if( max < p[i])
         {
             max = p[i];
         }
         
    }
    return max;
}

int main()
{
   int A[] = {11,13,23,34,56,78,8,109};
    
    int Size = sizeof(A)/sizeof(A[0]);

    int get = getElement( A , Size , 4);
    cout << get  << "\n";

    setElement( A , Size , 4);

    for (int i = 0 ; i < Size ; ++i)
    {
        cout << A[i] << ",";

    }

    cout << "\n";
    int minEle = minElement( A , Size );
    cout << minEle ; 

    cout << "\n";
    int maxEle = maxElement( A , Size );
    cout << maxEle ; 
}