#include <iostream>
#include <bits/stdc++.h>

using namespace std;

// lower triangular matrix store lower tringle elements with non zero elements.
// for  Matrix[i,j] if  i>=j  the elements are non zero.
// colunm major formula for lower tringular matrix
// A[n * (j-1) - (j-2)*(j-1)/ 2 + i-j]   // i = row and j = colunm.

// M [4,4] = {
//              {1, 0, 0, 0}
//              {5, 6, 0, 0}
//              {9, 10, 11, 0}
//              {13, 14, 15, 16}
//            }

class lowerTraiangleMatrix
{

    int *A; // array for storing lower tringular non zero elements
    int n;  // matrix diamentions.

public:
    lowerTraiangleMatrix(int n)
    {
        this->n = n;
        A = new int[n*(n-1)/2];
    }

    ~lowerTraiangleMatrix()
    {
        delete[] A;
    }

    void set(int i, int j, int ele)
    {
        if (i >= j)
        {
            A[n * (j-1) - (j-2)*(j-1)/ 2 + (i-j)] = ele; // for colunm major
        }
    }

    int get(int i, int j)
    {
        if (i >= j)
        {
            return A[n * (j-1) - (j-2)*(j-1)/ 2 + i-j]   ;
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
                if (i >= j)
                {
                    cout << A[n * (j-1) - (j-2)*(j-1)/ 2 + i-j]  << " ";
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
    lowerTraiangleMatrix tri(4); // for 4*4 matrix

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