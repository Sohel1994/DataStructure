#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main()
{  
     // in stack 
     int A[3][4] ={
                    {1,2,3,4},
                    {5,6,7,8},
                    {8,9,0,1}
                  };
   
     // partialy in stack
     int *B[3];// array of pointers in stack

     B[0] = new int[4];
     B[1] = new int[4];
     B[3] = new int[4];


    // declaration of 2 d array on heap fully array of pointers on heap as well
    int **c = new int *[3]; // declaration of array of pointers on heap
    for (int i = 0 ; i < 3 ; i++)
    {
        c[i] = new int [4];
    }



    


}