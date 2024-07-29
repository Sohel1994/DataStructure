#include<iostream>
#include<bits/stdc++.h>
using namespace std;


void TOH( int n , int A , int B , int C) //  move from A to C using B 1st call
{

    if ( n>0)
    {
       TOH ( n-1 , A , C , B);  // move from A to B using C recursive call
       cout << "form " << A << "  to " <<  C << "\n" ;
       TOH (n-1 , B , A , C );   // move form B to C using A recursive call
    }

}


int main()
{
    TOH (3,1,2,3);
}