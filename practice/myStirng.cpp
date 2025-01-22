#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class mystring
{
    char *str;

    public:
    mystring()
    {
        str = new char[1];
        str[0] = '\0';
    }

    mystring( char *ch)
    {
         if (ch == nullptr)
         {
             str = new char[1];
             str[0] = '\0';
         }
         else 
         {
            str = new char[strlen(ch)+1];
            strcpy(str , ch);
            str[strlen(ch)] = '\0';
         }
    }

    mystring& operator=( const mystring &other)
    {
         if ( this != &other)
         {
             delete [] str;
             str = new char[strlen(other.str)+1];
             strcpy(str , other.str);
             str[strlen(other.str)] = '\0';
         }
         return *this;
    }

    mystring( const mystring &other)
    {
             str = new char[strlen(other.str)+1];
             strcpy(str , other.str);
             str[strlen(other.str)] = '\0';
    }

    mystring( mystring &&other)
    {
         str = other.str;
         other.str = nullptr;
    }

    ~mystring()
    {
        delete [] str;
    }
};

int main()
{
     mystring m("hello");
     mystring m1 = m;
     
     mystring m2 = move(m1);
}