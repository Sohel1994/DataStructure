#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int A[10] = {6, 5, 4, 3, 10, 16, 14, 8, 7, 17};

    int n = sizeof(A) / sizeof(A[0]);

    int sumK = 10;

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (A[i] + A[j] == sumK)
            {
                cout << "pairs are " << A[i] << " and " << A[j] << "\n";
            }
        }
    }

    cout << "\n ====================================by hashing ==============================================\n";

    int large = 16;
    int hash[17] = {0};

    // by hashing for the same

    // Example  hash[sumK - A[i]]  = hash[10 - 6] =  hash[4] means A[i] = 4 is present in given array A
    // by hashing hash[A[i]]++,  hash [4] = 1 or 0 by present in given array A

    for (int i = 0; i < n; i++)
    {
        if (hash[sumK - A[i]] != 0 && (sumK > A[i]))
        {
            cout << "pairs are " << A[i] << " and " << sumK - A[i] << "\n";
        }
        hash[A[i]]++;
    }

    cout << "\n========================================sorted array pair sum ================================================\n";

    int B[10] = {1, 3, 4, 5, 6, 8, 9 ,10, 12, 14};

    int i = 0;
    int j = 9; // for array last element;

    while (i < j)
    {
        if (B[i] + B[j] == 10)
        {
            cout << " in sorted array pairs are " << B[i] << " and " << B[j] << "\n";
            i++;
            j--;
        }

        else if (B[i] + B[j] > 10)
        {
            j--;
        }

        else // (B[i] + B[j] < sumK)
        {
            i++;
        }
    }


    cout << "\n========================================min ans max in single scan================================================\n";


   int c[10] = {4,5,7,8,15,2,9,28,3,6};

   int m = sizeof(c)/sizeof(c[0]);

   int min = c[0];
   int max = c[0];

   i=0;   // int i at array index zero;
    
  // for(int i = 0 ; i < m-1 ; i++) // we can use while loop as well
   
   while(i<m-1)
   {
       if ( min > c[i])
       {
           min = c[i];
       }

      else if ( max < c[i] )
       {
          max = c[i];
       }

       i++; // increment i 
   }
  
  cout << "max : " << max << " and  min:" << min << "\n";

}