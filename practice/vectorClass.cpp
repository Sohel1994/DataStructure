
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

template<typename T> 
class Vector{

    T *data;
    size_t Size;
    size_t capacity;

    public:
    Vector( size_t Size)
    {
        this->Size = Size;
        this->capacity = Size;
        data = new T[Size];
        
    }

    void resize(size_t new_cpacity)
    {
        T * new_data = new T[new_cpacity];
        for(int i = 0 ; i<Size ; i++)
        {
            new_data[i] = data[i];
        }
        delete [] data;
        data = new_data;
        capacity = new_cpacity;
    }

    Vector ( const Vector&other)
    {
        capacity = other.cpacity;
        Size = other.Size;
        data = new T[capacity];
        for(int i = 0 ; i<Size ; i++)
        {
            data[i] = other.data[i];
        }

    }

    Vector & operator=( const Vector&other)
    {
          if (this != &other)
          {
             delete [] data;
             capacity = other.capacity;
             Size = other.Size;
             data = new T[capacity];
             for(int i = 0 ; i<Size ; i++)
             {
                 data[i] = other.data[i];
             }
          }
          
          return *this;
    }

    void push_back( T &value)
    {
        if(Size == capacity)
        {
            resize( capacity==0? 1 : capacity*2);
        }
        data[Size++] = value;
    }

    void pop_back()
    {
        if (Size > 0 )
        {
            --Size;
        }
    }

    ~Vector()
    {
        delete []data;
    }
    T *begin()
    {
        return data;
    }
    T *end()
    {
        return data+Size;
    }
};

int main()
{
    Vector<int>v(4);
}