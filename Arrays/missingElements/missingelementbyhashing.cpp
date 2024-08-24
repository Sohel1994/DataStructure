#include <iostream>
#include <bits/stdc++.h>

using namespace std;

// this method can be use for unsorted array it is call hashing or bit set.

int main()
{
    int arr[10] = {2, 4, 5, 6, 9, 10, 11, 12};

    // Calculate the size of the array
    int size = sizeof(arr) / sizeof(arr[0]);
    
    int l = 1;
    int h = 12;

    int hash[12] = {0}; // 12 is nothing but higher value in array and init the array by 0

    for (int i = 0; i < size; i++) // frequency increment
    {
        hash[arr[i]]++; // hash[2] = 1 , hash[4] = 1 , hash[5] = 1 , hash[6] = 1 , hash[9] = 1 ,
                        // hash[10] = 1 , hash[11] = 1 , hash[12] = 1
    }

    for (int i = l; i <= h ; i++ )
    {
        if( hash[i] == 0)
        {
            cout << "missin elemnets is: " << i <<"\n" ; 
        }
    }
}