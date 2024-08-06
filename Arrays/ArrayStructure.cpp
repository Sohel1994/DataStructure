#include<iostream>
#include<bits/stdc++.h>

using namespace std;

struct Array 
{
     int *A;
     int Size;
     int length;
};


int main()
{ 
    struct Array arr;

    arr.Size = 20;
    arr.A = new int[arr.Size];
    arr.length = 5;

    for (int i = 0 ; i < arr.length ; i++)
    {
        cin >> arr.A[i];
    }

    cout << "\n";

    for (int j = 0 ; j < arr.length ; j++)
    {
        cout<<  arr.A[j] << " ";
    }
   
}