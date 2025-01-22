#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class person
{

};

template<typename T> 

class smart
{
    int *refCount;
    T *ptr;

    public:
    smart( T *p = nullptr)
    {
        ptr = p;
        refCount = nullptr;
        refCount = new int(1);
    }

    ~smart()
    {
        if(refCount && --(*refCount) == 0 ) 
        {
            delete ptr;
            delete refCount;
        }
    }

    smart( const smart & other )
    {
           ptr = other.ptr;
           refCount = other.refCount;
           (*refCount)++;
    }

    smart & operator=( const smart & other )
    {
        if( this != &other)
        {
             if(refCount && --(*refCount) == 0 ) 
               {
                    delete ptr;
                    delete refCount;
               }
               ptr = other.ptr;
               refCount = other.refCount;
               if(refCount)
               {
                    (*refCount)++;
               }
        }
        
        return *this;
    }
    smart( smart && other )
    {
         ptr = other.ptr;
         refCount = other.refCount;
         other.ptr = nullptr;
         other.refCount = nullptr;
    }

    T * operator->()
    {
        return ptr;
    }

    T& operator *()
    {
        return *ptr;
    }
};


int main()
{
    smart<person> s = new person();
}