#include <iostream>
#include <string.h>
#include <bits/stdc++.h>
using namespace std;

// Anagram same set of char in given strings.
//  97 plays key roll in hashing for small letters.

int main()
{
    char A[] = "decimal";
    char B[] = "medical";

    int hash[26] = {0};

    if ( strlen(A) != strlen(B))
    {
        cout << "strings are not anagram \n";
    }

    int i , j;

    for (  i = 0 ; A[i]!= '\0' ; i++)
    {
         hash[A[i]-97] += 1; // gives frequency of char in hash table which is present in the string.
    }

    for ( j = 0 ; B[j] != '\0' ; j++)
    {
         hash[B[j] - 97] -= 1 ; // reduce the frequency of hash table for same letters.
                                // if diff char found then frequncy becomes -1 so deal with it.
                                // it says the string is not anagram.
    }

    for ( int i = 0 ; i < 26 ; i++)
    {
        cout << hash[i] << " , " ;
        if (hash[i] < 0 ) // fequency is -1 for different char i.e -1
        {
            cout << "strings are not anagram \n";
        }

    }
}