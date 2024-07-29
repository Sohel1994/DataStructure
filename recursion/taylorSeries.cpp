#include<iostream>
#include<bits/stdc++.h>

using namespace std;

// taylor series
// (e power x) 1+(x/1)+ (x*2)/2! + (x*3)/3! + (x*4)/4! ....n terms.
// note ( x * 2 at the place of 2 is power term not a multiplication)

double e(double x, double n)
{
      static double p = 1 , f= 1;
      double  result ;
       if (n==0)
       {
       return 1;
       }
       else
       { 
            result = e(x,n-1);
            p = p * x;
            f = f * n;
            return result+(p/f);
       } 

}

// using loop 
double e1(double x , double n)
{

     double s ;
     while(n>0)
     {
         s = 1+(x/n) * s; 
         n--;
     }
     return s;
}

// tylor series using honers rule recursion;
double e3( double x , double n)
{
     static double s;

        if(n == 0)
            {
                return s;
            }
        else
            {
                s = 1+x/n*s;
            }
        return e3( x , n-1);


}



   
int main()
{
     double series =  e( 1,10);
     cout << "  tylor series e power x is  e = 5  and x = 6 : " << series << "\n"; 

     double series2 =  e1( 1,10);
     cout << "  tylor series using loop e1 power x is  e = 1 and x = 10 : " << series2 << "\n"; 

     double series3 =  e3( 1,10);
     cout << "  tylor series using recursion honers rule e1 power x is  e = 1 and x = 10 : " << series3 << "\n";
}