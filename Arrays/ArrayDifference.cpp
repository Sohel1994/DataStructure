#include <iostream>
#include <bits/stdc++.h>
#include <string>
using namespace std;

int *diffByMerging(int *c, int *a, int *b, int m, int n)
{
    // array must be sorted.
    
    int i = 0;
    int j = 0;
    int k = 0;

    while (m > i && n > j)
    {
        if (a[i] < b[j])
        {
            c[k++] = a[i++];
        }
        else if (b[j] < a[i])
        {
            j++;
        }
        else
        {
            i++; // if both are same copy neglect both.
            j++;
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

    // for (int i = 0; i < m; ++i)
    // {
    //     bool diff = true;
    //     for (int j = 0; j < n; ++j)
    //     {
    //         if (A[i] == B[j]) // only copy form array a and neglect duplicate. vise versa.
    //         {
    //             diff = false;
    //             break;
    //         }
    //     }
    //     if (diff)
    //     {
    //         c[k++] = A[i];
    //     }
    // }

    // for (int i = 0; i < k; ++i)
    // {
    //     cout << c[i] << ", ";
    // }

    cout << "\n";

    //====================================================================================================================//

    // both array must be sorted one then we can use merging.

    int A[] = {1, 4, 6, 8, 10};
    int B[] = {2, 4, 5, 8, 11};
    int m = sizeof(A) / sizeof(A[0]);
    int n = sizeof(B) / sizeof(B[0]);

    int *ptr = new int[m + n]();

    ptr = diffByMerging(ptr, A, B, m, n);

    for (int i = 0; i < m + n; ++i)
    {
        cout << ptr[i] << ", ";
    }

    delete[] ptr; // insure to release memory.
}