#include<iostream>
#include<bits/stdc++.h>

using namespace std;


// Ascii value for upper case is  65 - 90
// Ascii value for lower case is  97 - 122 
// +32 or -32 play key roll in change case

char *ReverseString(char *ptr)
{
    int j;
    int i = 0;
    for( j = 0 ; ptr[j] != '\0' ; j++)
    {
        // calculate string length.
        // set j pointing to the null;
        // which is nothing but length of string .
    }

    char *rev = new char[j]; // another array used with string length.

    j = j-1;// is at lase element of string

    for (i , j ; j >= 0 ;  j-- , i++)
    {
        rev[i] = ptr[j];
    }
    cout<< i << "\n";

    rev[i] = '\0';

    return rev;

}

char *reverseSentence( char *sen)
{
       int j ;
       int i = 0;
       while (sen[j] != '\0' )
       {
          j++;
       }       
       j = j - 1; // pointing at lase element of string.

       char temp; //temp char for swaping.
       
       while( i < j )
       {
            temp = sen[i];
            sen[i] = sen[j];
            sen[j] = temp ;

            i++;
            j--;
            
       }

     return sen;
}

int main()
{
       char name[] = "sohel";

       char *revName;
       
       revName = ReverseString(name);

       cout << " reverse string using another string array :" << revName;


       cout << "\n ====================using same array ========================= \n ";

       char sentence[] = "How are you" ;

       char *revSentence = reverseSentence(sentence);

       cout << " reverse sentence is : "<< revSentence;


}