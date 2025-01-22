#include <queue>
using namespace std;

class Stack {
    queue<int> q; // Queue to simulate the stack

public:
    // Push an element onto the stack  // 1 , 2 , 3
    void push(int value) {
        // Step 1: Add the new element to the queue
        q.push(value);  // value 4 then 1 , 2 ,3 , 4

        // Step 2: Rotate the queue to place the new element at the front
        int size = q.size(); // 4
        while (size > 1) {
            q.push(q.front()); // rotating queue 
            q.pop(); //4 becomes front of queue
            size--;
        }
    }

    // Remove the top element of the stack
    void pop() {
        if (!q.empty()) {
            q.pop();
        }
    }

    // Get the top element of the stack
    int top() {
        if (!q.empty()) {
            return q.front();
        }
        return -1; // Return -1 if the stack is empty
    }

    // Check if the stack is empty
    bool empty() {
        return q.empty();
    }
};


////////////////////////////////////////////////////

  template<class T> 
  class any{
 
      T n;
	  
	  public :  
	  void fun( T a);
  };
  
  template<class T>
  void any<T>::fun(T a)
  {
       n = a;
  }