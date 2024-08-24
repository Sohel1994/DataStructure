
#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int arr[10] = {2, 4, 5, 6, 9, 10, 11, 12};

    // Calculate the size of the array
    int size = sizeof(arr) / sizeof(arr[0]);
    // If you need n to be size + 1 for some reason, you can do:
    int n = size + 1;

    int l = 1;
    int h = 12;

    int diff = arr[0] - 0; // diff between each elament and index of arry is same for consicative elments.

//===================================================================================================================//

    // diff =  arr[0] - 0 =  2-0 = 2
    
    // diff =  arr[1] - 1 =  4-1 = 3 // diff missmatch so missing element is   diff+i = 2+1 = 3
                                     // now onwords update the diff that is 3

    // diff =  arr[2] - 2 =  5-3 = 3

    // diff =  arr[3] - 3 =  6-3 = 3

    // in while loop

    // diff =  arr[4] - 4  =   9-4  = 5 // diff missmatch so missing element is   diff+i = 3+4 = 7
                                        // now onwords update the diff++ in while loop for multiple missing elements.
                                        // if the diff is less than arr[i]-i
    //  diff++ = 3 to 4

    //  diff  =  arr[4] - 4 =   9-4  = 5  //diff missmatch so missing element is   diff+i = 4+4 = 8

    //  diff++ = 4 to 5 now while loop breaks

    // updated diff now is  5

    //  diff  =  arr[4] - 4 =   9-4  = 5

    //  diff  =  arr[5] - 5 =   10-5  = 5

    //  diff  =  arr[6] - 6 =   11-6  = 6

    //  diff  =  arr[7] - 7 =   12-7  = 5

//==================================================================================================================//

    // so when ever diff miss match that would be consider as missing element in array.

    for (int i = 0; i < size; i++) // this method can be use in any range consicative no.
    {
        if (diff != arr[i] - i)
        {
            while (diff < arr[i] - i)
            {
                cout << " missing element arr[i] :" << diff + i << "\n"; // diff + i gives missin element
                diff++;                                                  // update the new diff.
            }
        }
    }
}