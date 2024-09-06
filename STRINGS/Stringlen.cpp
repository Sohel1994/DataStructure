#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int myStringlen( char *ptr)
{
    int i = 0;
    for( i = 0 ; ptr[i] != '\0' ; i++)
    {

    }
               // ptr[5] != '\0'
    return i;
}


int main()
{
       char name [] = "sohel";
       int len = myStringlen(name);

        cout<<" str len is "<< len ;
}