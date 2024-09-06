#include<iostream>
#include<bits/stdc++.h>

using namespace std;


// Ascii value for upper case is  65 - 90
// Ascii value for lower case is  97 - 122 
// +32 or -32 play key roll in change case

char *changeCaselower(char *ptr)
{

    int i = 0;
    for( i = 0 ; ptr[i] != '\0' ; i++)
    {
          if (ptr[i]>= 65 && ptr[i]<= 90)
          {
             ptr[i] += 32; 
          }
    }

    return ptr;

}


char *changeCaseUpper(char *ptr)
{

    int i = 0;
    for( i = 0 ; ptr[i] != '\0' ; i++)
    {
          if (ptr[i]>= 92 && ptr[i]<= 122)
          {
             ptr[i] -= 32; 
          }
    }

    return ptr;

}

char *toggleCase(char *ptr)
{

    int i = 0;
    for( i = 0 ; ptr[i] != '\0' ; i++)
    {
          if (ptr[i]>= 92 && ptr[i]<= 122)
          {
             ptr[i] -= 32; 
          }
          else if (ptr[i]>= 65 && ptr[i]<= 90)
          {
             ptr[i] += 32; 
          }
    }

    return ptr;

}



int main()

{   
     char name [] = "SoHel";
     char *p = changeCaselower(name);

     cout << " name in lower case : " << p;


    cout << "\n  ==================== \n";

     p = changeCaseUpper(name);

     cout << " name in upper case : " << p;

    cout << "\n  ==================== \n";

    char sentense [] = "hOw Are YoU";
    char *ptr = toggleCase(sentense);
    cout << " sentense after toggle case : " << ptr; // o/p HoW aRE yOu
}
