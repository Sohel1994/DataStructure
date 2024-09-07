#include <iostream>
#include <string.h>
#include <bits/stdc++.h>
using namespace std;

int main()
{

    char str[] = "finding";

    for (int i = 0; i < strlen(str); i++)
    {
        bool found = false;
        int count = 1;
        if (str[i] != -1)
        {
            for (int j = i + 1; j < strlen(str); j++)
            {
                if (str[i] == str[j])
                {
                    found = true;
                    str[j] = -1;
                    count++;
                }
            }
        }
        if (found)
        {
            cout << str[i] << " char found " << count << " times" << "\n";
        }
    }

    cout<<"============================ using hash algorithm =========================================\n";

    //============================using hash algorithm ==================================================//

    // english letters are 26 so make hash integer array of int hash [26];
    // 97 play main key value for hashing small letter
    // and 65 for capital letters

    int hash[26] = {0}; // gives frequencies of letter appers in the string.

    char A[] = "allauddin";

    for (int i = 0; i < strlen(A); i++)
    {
        hash [A[i] - 97]++ ;    //  a = 97 - 97  =   hash[0] = 2 'a' appers 2 times
                                //  l = 108 - 97 =   hash[11]= 2 'l' appers 2 times
                                //  u = 117 - 97 =   hash[20]= 1 'u' appers 1 time
                                //  d = 100 - 97 =   hash[3] = 2 'd' appers 2 times
                                //  i = 105 - 97 =   hash[8] = 1 'u' appers 1 time
                                //  n = 110 - 97 =   hash[13]= 1 'u' appers 1 time
    }

    for ( int i = 0 ; i < 26 ; i++)
    {
        if ( hash[i] > 1)
        {
            cout << char(i+97) << " apperes " << hash[i] << " times \n" ; 
        }
    }
}