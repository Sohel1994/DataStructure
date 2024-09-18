#include <iostream>
#include <bits/stdc++.h>

using namespace std;

// upper triangular matrix store upper tringle elements with non zero elements.
// for  Matrix[i,j] if  i<=j  the elements are non zero.
// row major formula for lower tringular matrix
// A[n * (i-1) - (i-2)*(i-1)/ 2 + j-i]   // i = row and j = colunm.

// M [4,4] = {
//              {1, 2, 3, 4}
//              {0, 6, 7, 8}
//              {0, 0, 11, 12}
//              {0, 0, 0, 16}
//            }

class uppertringularMatrix
{

    int *A; // array for storing lower tringular non zero elements
    int n;  // matrix diamentions.

public:
    uppertringularMatrix(int n)
    {
        this->n = n;
        A = new int[n*(n-1)/2];
    }

    ~uppertringularMatrix()
    {
        delete[] A;
    }

    void set(int i, int j, int ele)
    {
        if (i <= j)
        {
            A[n * (i-1) - (i-2)*(i-1)/ 2 + j-i] = ele; // for row major
        }
    }

    int get(int i, int j)
    {
        if (i <= j)
        {
            return A[n * (i-1) - (i-2)*(i-1)/ 2 + j-i] ;
        }
        else
            return 0;
    }

    void display()
    {
        int i, j;
        for (i = 1; i <= n; i++)
        {
            for (j = 1; j <= n; j++)
            {
                if (i <= j)
                {
                    cout << A[n * (i-1) - (i-2)*(i-1)/ 2 + j-i] << " ";
                }
                else
                {
                    cout << "0 ";
                }
            }
            cout << "\n";
        }
    }
};

int main()
{
    uppertringularMatrix tri(4); // for 4*4 matrix

    int x;
    for (int i = 1; i <= 4; i++)
    {
        cout << "row : " << i << "\n";
        for (int j = 1; j <= 4; j++)
        {
            cin >> x;
            tri.set(i, j, x);
        }
        cout << "\n";
    }


    cout << "display \n";
    tri.display();
}