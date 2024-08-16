#include <iostream>
#include <bits/stdc++.h>
#include <string>
using namespace std;


int *commanByMerging(int *c, int *a, int *b,int  n, int  m)
{
    int i = 0;
    int j = 0;
    int k = 0;

    while (n > i && m > j)
    {
        if (a[i] < b[j])
        {
            i++;
        }
        else if (b[j] < a[i])
        {
            j++;
        }
        else
        {
            c[k++] = b[j++];  // if both are same copy form one and increase both
            i++;
        }
    }

   

    return c;
}


int main()
{

    // int A[] = {4, 7, 3, 6, 5};
    // int B[] = {8, 9, 2, 4, 5};
    // int m = sizeof(A) / sizeof(A[0]);
    // int n = sizeof(B) / sizeof(B[0]);

    // int c[10];
    // int k = 0;



    // for (int i = 0; i < n; ++i)
    // {
    //     bool comman = false;
    //     for (int j = 0; j < m; ++j)
    //     {
    //         if (A[j] == B[i]) // if B arry has same element as A array in copy those only that.
    //         {
    //             comman = true;
    //             break;
    //         }
    //     }
    //     if (comman)
    //     {
    //         c[k++] = B[i];
    //     }
    // }

    // for (int i = 0; i < k; ++i)
    // {
    //     cout << c[i] << ", ";
    // }

    cout << "\n";

//====================================================================================================================//


    // both array must be sorted one then we can use merging.
    
    int A[] = {1,4,6,8,10};
    int B[] = {2,4,5,8,11};
    int n = sizeof(A) / sizeof(A[0]);
    int m = sizeof(B) / sizeof(B[0]);


    int *ptr = new int[m + n]();

    ptr = commanByMerging(ptr, A, B, n, m); 


    
    for (int i = 0; i<m+n ; ++i) 
    {
        cout << ptr[i] << ", ";
    }

    delete [] ptr;  // insure to release memory.

}