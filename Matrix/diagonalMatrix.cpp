#include<iostream>
#include<bits/stdc++.h>
using namespace std;

// diagonal matrix store diagonal elements with non zero elements.
//for  Matrix[i,j] if  i==j  the elements are non zero.

// M [3,3] = { 
//              {3 , 0 , 0 } 
//              {0 , 5 , 0 } 
//              {0 , 0 , 7 } 
//            }

struct Matrix
{
     int *A; // one array for diagonal elements
     int n;
};

void setDiagonalEle( struct Matrix *m , int i , int j , int ele)
{
    if (i==j)
    {
         m->A[i] = ele;
    }
}

int getDiagonalEle(struct Matrix *m , int i , int j )
{
       if (i==j)
       {
          return m->A[i];
       }
       else 
       return 0;
}

void displayMatrix( struct Matrix *m )
{
     int i,j;

     for ( i =0 ; i < m->n ; i++ )
     {
        for ( j =0 ; j < m->n ; j++ )
        {
              if( i== j)
              {
                   cout << m->A[i] << " ";
              }
              else
              {
                 cout << "0 ";
              }
        }
        cout << "\n";
     }
}


int main()
{
      struct Matrix M;
      M.n = 4 ;
      M.A = new int[4];

      setDiagonalEle( &M , 0 , 0 , 3);
      setDiagonalEle( &M , 1 , 1 , 5);
      setDiagonalEle( &M , 2 , 2 , 7);
      setDiagonalEle( &M , 3 , 3 , 9);


      displayMatrix(&M);

      cout << getDiagonalEle(&M , 2 , 2) << "\n";

}