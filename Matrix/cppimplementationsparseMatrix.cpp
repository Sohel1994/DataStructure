#include <iostream>
using namespace std;

struct element {
    int i; // Row
    int j; // Column
    int x; // Non-zero value
};

struct sparse {
    int m;     // Rows
    int n;     // Columns
    int num;   // Number of non-zero elements
    element* ele; // Pointer to array of elements

    sparse(int m , int n , int num)
    {
         this->m = m;
         this->n = n;
         this->num = num;
         ele = new element [this->num];
    }

    ~sparse()
    {
        delete[]ele;
    }

    void read()
    {
        for (int i = 0; i < num; i++)
        {
            cout << "Element " << i + 1 << ":\n";
            cout << "Row: ";
            cin >> ele[i].i;
            cout << "Column: ";
            cin >> ele[i].j;
            cout << "Value: ";
            cin >> ele[i].x;
        }
    }                                                                                                                   

    void display()
    {
        int k = 0;
        cout << "\nMatrix:\n";
        for (int i = 0; i < m; i++) 
        {
            for (int j = 0; j < n; j++) 
            {
                if (k < num && i == ele[k].i && j == ele[k].j) 
                {
                    cout << ele[k++].x << " ";
                } 
                else 
                {
                    cout << "0 ";
                }
            }
            cout << "\n";
        }
    }

    sparse& operator+( sparse &s2)
    {
        if (m != s2.m || n != s2.n)
        {
            cout << "in valid inputs "; // Dimensions mismatch
        }

        sparse *sum = new sparse(m,n,num+s2.num);
        int p = 0, q = 0, r = 0;
        while (p < num && q < s2.num)
        {
            if (ele[p].i < s2.ele[q].i ||
                (ele[p].i == s2.ele[q].i && ele[p].j < s2.ele[q].j))
            {
                sum->ele[r++] = ele[p++];
            }
            else if (s2.ele[q].i < ele[p].i ||
                        (s2.ele[q].i == ele[p].i && s2.ele[q].j < ele[p].j))
            {
                sum->ele[r++] = s2.ele[q++];
            }
            else
            {
                sum->ele[r] = ele[p];
                sum->ele[r++].x = ele[p++].x + s2.ele[q++].x;
            }
        }

        for (; p < num; p++) {
            sum->ele[r++] = ele[p];
        }
        for (; q < s2.num; q++) {
            sum->ele[r++] = s2.ele[q];
        }

        sum->num = r;
        return *sum;
    }
};

int main()
{
       sparse s(5,5,2);
       sparse s1(5,5,2);
       s.read();
       cout << " second matirx \n";
       s1.read();
       sparse sum = s+s1;
       sum.display();
}