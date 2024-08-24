#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main()
{

     int arr[10] = {1,2,3,4,5,6,8,9,10,11};

     
    // Calculate the size of the array
    int size = sizeof(arr) / sizeof(arr[0]);

    // If you need n to be size + 1 for some reason, you can do:
    int n = size + 1;

     int missingElement = 0;
     int sumNaturalEle = n*(n+1)/2;
     int sumEle = 0;

     for (int i = 0 ; i < size ; i++)
     {
         sumEle += arr[i];
     }
     
     missingElement = sumNaturalEle - sumEle;
     
    cout<< " missing element from array is : " << missingElement << "\n";


}