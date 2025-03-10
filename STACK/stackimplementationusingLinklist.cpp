

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

struct node{
   
        int data;
        node *next;
        node( int val ) : data(val) ,next(nullptr)
        {

        }

};

class Stack
{

        node *top; // stack elements
        public:
        Stack() : top(nullptr)
        {
            
        }
        bool empty()
        {
             return top == nullptr;
        }

        bool full()
        {
             node *temp = new node(0); //ceration of node stack overflow memory  full ;
             return temp == nullptr;
             delete temp;
        }
 
        void push(int n)
        {
             if(!full())
             {
                node * temp = new node(n);
                temp->next = top;
                top = temp;   
             }
        }

        void pop()
        {
            if (!empty())
            {
                 node *temp = nullptr;
                 temp = top ; 
                 top = top->next;
                 delete temp;
            }
  
        }

        void show()
        {
            node *p = top;
            while (p != nullptr)
            {
                cout << p->data << " ";
                p = p->next;
            }
        }
        ~Stack()
        {
            while(!empty())
            {
                pop();
            }
        }

        int Top()
        {
             return top->data;
        }


        int peak(int pos)
        {
             node *p = top;
             for (int i = 0 ; p != nullptr && i < pos-1 ; i++)
             {
                p = p->next ;
             }
             return p->data;
        }

};

int main ( )
{
    Stack st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(5);
    
    st.show();

    cout << "\n top " << st.Top() << " \n" ;
    
    st.pop();

    st.show();
    
    cout << "\n top " << st.Top() << " \n" ;

    cout << "\n peak value " << st.peak(2) << "\n";


}