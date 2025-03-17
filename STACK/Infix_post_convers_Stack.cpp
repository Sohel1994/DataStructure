#include<iostream>
#include<bits/stdc++.h>
using namespace std;

bool isoperand(char ch)
{
     if(ch == '+' || ch == '/' || ch == '*' || ch == '-' )
     {
        return false;
     }
     else
     {
     return true;
     }
}

int precedence (char x)
{
       if( x == '+' || x == '-')
       {
           return 1 ;
       }
       else if( x == '*' || x == '/')
       {
           return 2 ;
       }
       else
       return 0; // if there is nothing to compare

}


char * conversion( char * str)
{

     stack<char>st;
     st.push('#');  // initialy is stack is empty so dumy char is added to neglect error 
                    // while comparering precedence.

     char *postfix = new char [strlen(str)+1];
     int i = 0;
     int j = 0;

    while(str[i] != '\0')
    {
        cout <<  str[i] << "\n";
        if (isoperand(str[i]))
        {

            postfix[j++] = str[i++]; // add operands from string and move str by i++
        }
        else // for precedence of operators 
        {

            if ( precedence(str[i]) > precedence(st.top()) )
            {
                  st.push(str[i++]); // push in to stack
                                    
            }
            else
            {
                postfix[j++] = st.top();
                st.pop();
            }
        }

    }
        while (!st.empty())  // for remaing operators in stack
        {
             postfix[j++] = st.top();
             st.pop();
        }

        postfix[--j] = '\0';  // because dumy '#' stack in the stack  
        
        return postfix;

}

int main ()
{
      char str[]  = "a+b*c-d/e"; // abc*+de/-  // postfix  output

      char *postfix = conversion(str);

       
       for(int i = 0 ; postfix[i] != '\0'  ; i++)
       {
             cout << postfix[i];
       }
}
