#include <iostream>
#include <bits/stdc++.h>
using namespace std;

bool isOperand(char ch)
{
    if (ch == '+' || ch == '/' || ch == '*' || ch == '-')
    {
        return false;
    }
    else
    {
        return true;
    }
}

int evalution(char *pStr)
{
    stack<int> st; // for integer operation needs to perform on
                   // char no of string '3' -> must be int 3

    int x1, x2, result;
    for (int i = 0; pStr[i] != '\0'; i++)
    {
        if (isOperand(pStr[i]))
        {
           // cout << "pstr[i] " << pStr[i] << "\n";
            st.push(pStr[i] - '0'); // for operands int value in stack.
        }
        else
        {
            x2 = st.top(); // second operand on top of stack
          //  cout <<  "x2 " << x2 << "\n"; 
            st.pop();
            x1 = st.top(); // first operand
          //  cout <<  "x1 " << x1 << "\n"; 
            st.pop();

            switch (pStr[i])
            {
            case '+':
                result = x1 + x2;
              //  cout << "result + "<< result << "\n";
                st.push(result);
                break;

            case '-':
                result = x1 - x2;
              //  cout << "result - "<< result << "\n";
                st.push(result);
                break;

            case '*':
                result = x1 * x2;
              //  cout << "result * "<< result << "\n";
                st.push(result);
                break;

            case '/':
                result = x1/x2;
               // cout << "result / "<< result << "\n";
                st.push(result);
                break;

            default:
                break;
            }
        }
    }

    return st.top();
}

int main()
{
    char postfix[] = "35*62/+4-";

    int result = evalution(postfix);

    cout << " reslut for postfix evaluation " << result << "\n";
}