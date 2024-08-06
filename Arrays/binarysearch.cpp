#include<iostream>
#include<bits/stdc++.h>
#include<string>

using namespace std;

// not for binary search arry should be sorted.

int Binaryrecursion(int p[], int l , int h , int k)
{

      
     if( l<=h)
     {
        int mid = (l+h)/2;
        if( k == p[mid])
        {
        return mid;
        }
        else if( k < p[mid])
        return Binaryrecursion(p,l,mid-1,k);
        else 
        return Binaryrecursion(p,mid+1,h,k);
     }
     else
     return -1;

}



int main()
{
    int A[20] = {1,3,4,6,7,9,11,13,14,23,34,45,56,78,89,99,109,119,123};
    
    int l = 0;
    int h = 20;

    int k = 7;
    // int found = 0;
    // int n = sizeof(A)/sizeof(A[0]);
    // while (l<=h)
    // {
    //     int mid = (l+h)/2;
    //     if( k == A[mid])
    //     {
    //         cout << A[mid] <<" key at :" << mid ;
    //         found = 1;
    //         break;
    //     }
    //     else if ( k < A[mid])
    //     {
    //         h = mid-1;
    //     }
    //     else
    //     {
    //         l = mid+1;
    //     }

    // }
   
    // if ( found != 1)
    // {
    // cout << "key not found";
    // }

    int index = Binaryrecursion( A , l , h , k );

    cout << index << "\n";
 
}