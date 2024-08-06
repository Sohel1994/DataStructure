#include<iostream>
#include<bits/stdc++.h>

using namespace std;

struct Array 
{
     int A[20];
     int Size;
     int length;
};

void display( struct Array arr)
{
      for (int i = 0 ; i < arr.length ; ++i)
      {
           cout << arr.A[i] << " ";
      }
      cout<< "\n";
}

void append( struct Array *arr, int element)
{
    if( arr->length < arr->Size )
    {
       arr->A[arr->length] = element;
       arr->length++;
    }    

}

void Insert( struct Array *arr1 , int index , int element)
{
      int i = 0;
      if( 0 <= index && index<arr1->Size )
      {
             for( i = arr1->length ; i > index ; --i)
             {
                  arr1->A[i] = arr1->A[i-1]; // shifting of elements forward to make space at index
             }
             arr1->A[index] = element;
             arr1->length++;
      }    

}

void Delete( struct Array *arr1 , int index)
{
      int i = 0;
      if( 0 <= index && index<arr1->Size )
      {
             for( i = index ; i < arr1->length-1 ; ++i)
             {
                  arr1->A[i] = arr1->A[i+1]; // shifting of elements forward to make space at index
             }
             arr1->length--;
      }    

}




int main()
{
    struct Array arr = {{ 5 , 6 , 7 , 8 , 10 , 11 }, 10 , 6};
    
    // append(&arr, 9);
    // Insert(&arr, 2 , 18);
    Delete(&arr, 2);
    display(arr);


    cout << arr.length;
      
}