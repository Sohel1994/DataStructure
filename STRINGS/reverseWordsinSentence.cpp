#include <iostream>
#include <string.h>
#include <bits/stdc++.h>

using namespace std;


// helper function for reveres the words
void reverseRange(char *str, int starWord, int endWord)
{
    char temp;
    while (starWord < endWord)
    {
        temp = str[starWord];
        str[starWord] = str[endWord];
        str[endWord] = temp;
        
        starWord++;
        endWord--;
    }
}

char *reverse(char *str)
{
    int length = strlen(str);
    reverseRange(str, 0 , length-1); // reverse the string.
    int i;
    int word_start = 0;

    for (i = 0; i <= length; i++)
    {
        if (str[i] == ' ' || str[i] == '\0') // null also consider for reversing
        {
            // calling helper function for reverse words
            reverseRange(str, word_start, i - 1); // i-1 represents last char of each word before space or null;
            word_start = i + 1 ;             // move to next word by skiping space
        }
    }

 //   reverseRange(str, 0 , length-1); // reverse the string.
    return str;
}

int main()
{
    char sentence[] = "sohel Allauddin Devalekar";

    char *reverseSentence = reverse(sentence);

    cout << " reveres sentence is : "<< reverseSentence;
}