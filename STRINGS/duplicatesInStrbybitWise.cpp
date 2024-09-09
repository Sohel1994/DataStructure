#include <iostream>
#include <string.h>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    char A[] = "finding";

    int hash = 0, x = 0; // used for create no for hashing
                         //  hash no and x is used for cheking that bit position is set or not for find duplicates.
                         //  using ascci value of char - 97 is string.

    for (int i = 0; A[i] != '\0'; i++)
    {
        x = 1;             // every time its need be 1 at start of the loop
        x = x << A[i] - 97; // A[i] - 97 position of bit need to shift by 1
                           // for 'f' char  102 - 97 = 5 ,  x will become 5 by shifting 1 on 5th position.
    
       if ( hash & x)  // chacking hash no position is already set by x no pos.
       {
            cout << A[i] << " : is duplicate in given string "<<"\n";       
       }

       else
       {
          hash = hash | x ;  // make that hash no position set.
                             // for 'f' char hash no pos set to 1
       }
    }
}