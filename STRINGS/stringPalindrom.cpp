#include <iostream>
#include <string.h>
#include <bits/stdc++.h>
using namespace std;

bool checkPalindrom(char *str)
{
    int len = strlen(str);
    int i = 0;
    int j = len - 1;

    while ( i < j)
    {
         if (str[i] != str[j])
         {
            return false;
         }

         i++;
         j--;
    }

    return true;
}

int main()
{
    char str[] = "sohel";

    char rev[strlen(str)];

    int j = 0;
    for (int i = strlen(str) - 1; i >= 0; i--)
    {
        rev[j++] = str[i];
    }
    cout << "reverse string is : " << rev << "\n";

    bool palindrom = true;
    for (int i = 0; i < strlen(str) && i < strlen(rev); i++)
    {
        if (str[i] != rev[i])
        {
            palindrom = false;
            break;
        }
    }

    if (palindrom)
    {
        cout << "given string str is  Plandrom" << "\n";
    }
    else
    {
        cout << "given string str is not  Plandrom" << "\n";
    }

//==============================================================================================================//

   cout << "================================by compairing same string===================================\n";


    char str_palindrom[] = "sohel";

    bool isPalindrom = checkPalindrom(str_palindrom);

    if (isPalindrom)
    {
        cout << "given string str_palindrom is  Plandrom" << "\n";
    }
    else
    {
        cout << "given string str_palindrom is not  Plandrom" << "\n";
    }
    
}