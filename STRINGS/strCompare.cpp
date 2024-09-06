#include <iostream>
#include <string.h>
#include <bits/stdc++.h>
using namespace std;

int main()
{
     char str1 [] = "paint";
    
     char str2 [] = "painter";

      int i = 0 ;
      int j = 0 ;
      for ( i=0 , j=0 ; str1[i] != '\0' && str2[j] != '\0' ; i++, j++ )
      {
            
            if( str1[i] != str2[j])
            { 
                 break;
            }
      }

      if( str1[i] == str2[j]) 
      {
        cout << "strings are equal" << "\n";
      }

      else if ( str1[i] <= str2[j] ) // str[i] = '\0' ascii is 0
      {
          cout << "strings str1 is smalller" << "\n";
      }
      else
      {
          cout << "strings str2 is smalller" << "\n";
      }
}