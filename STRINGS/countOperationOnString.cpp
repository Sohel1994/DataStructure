#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int countVoweles(char *ptr)
{
    int i = 0;
    int count = 0;
    for (i = 0; ptr[i] != '\0'; i++)
    {
        if (ptr[i] == 'a' || ptr[i] == 'A' ||
            ptr[i] == 'e' || ptr[i] == 'E' ||
            ptr[i] == 'i' || ptr[i] == 'I' ||
            ptr[i] == 'o' || ptr[i] == 'O' ||
            ptr[i] == 'u' || ptr[i] == 'U')
        {
            count++;
        }
    }
    return count;
}

int countWords(char *ptr)
{
    int i = 0;
    int count = 0;
    for (i = 0; ptr[i] != '\0'; i++)
    {
        if (ptr[i] == ' ' && ptr[i - 1] != ' ') // ptr[i-1] = ' ' condition check for white space contigioue spaces.
        {
            count++;
        }
    }

    return count + 1; // because we calculating space in sentance so words must be +1
}

bool validateString(char *ptr)
{

    int i = 0;
    int count = 0;
    for (i = 0; ptr[i] != '\0'; i++)
    {

        if (!( ptr[i] >= 'a' && ptr[i]<='z') &&
            !( ptr[i] >= 'A' && ptr[i]<='Z') &&
            !( ptr[i] >= '0' && ptr[i]<='9') )    // ! represents the char not within a given range. 
            {
                return false;
            }
    }
    return true;
}

int main()
{
    char sentense[] = "hOw Are YoU";
    int vCount = countVoweles(sentense);

    cout << " the vowels count in sentence : " << vCount << "\n";

    int words = countWords(sentense);

    cout << " the words count in sentence : " << words << " \n";

    char user_name[] = "Sohel1994";
    if (validateString(user_name))
    {
        cout << " user_name is valid \n";
    }
    else
    {
        cout << " user_name is not valid \n" ;
    }
}