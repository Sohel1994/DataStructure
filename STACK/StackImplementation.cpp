#include<iostream>
#include<bits/stdc++.h>
using namespace std;

struct Stack{
   
       int *st;
       int size;
       int top;

       public:
       Stack(int s = 10)
       {
           size = s;
           top = -1;
           st = new int [size];   
       }

       bool empty()
       {
         return top == -1; //
       }

       bool full()
       {
         return top == size-1; // last element 
       }

       void push(int n)
       {
           if (!full())
           {
              top++;
              st[top] = n; 
           }
       }

       void pop()
       {
         if(!empty())
         {
           top--;
           size--;
         }
       }

       int Top()
       {
           if(!empty())
           {
              return st[top];
           }
       }

       void show()
       {
          for (int i  = size-1 ; i >=  0 ; i-- )
          {
            cout << "stack values " << st[i] << "\n";
          }      
       }

       int peak( int pos)
       {

                if(!empty())
                {
                    return st[top - pos + 1] ; // top 4 , pos 1 then  st [(4 - 1) + 1] = 4
                }
                else
                {
                    return -1;
                }

       }

       ~Stack()
       {
             delete [] st;
       }
};

int main()
{

        Stack s(5);
        s.push(1);
        s.push(2);
        s.push(3);
        s.push(4);
        s.push(5);

        s.show() ; 
        cout << " =============================== \n" ;

        s.pop();
        
        
        cout << " top " << s.Top() << "\n ";

        s.pop();

        s.show() ;
        
        cout << " peak " << s.peak(2)<< "\n"; 
    

}