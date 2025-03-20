#include <iostream>
using namespace std;

class QueueImplementation {
private:
    int *q;
    int first;
    int last;
    int size;
    int count; // to track current number of elements

public:
    QueueImplementation(int s = 1) {
        size = s;
        first = 0;
        last = -1;
        count = 0;
        q = new int[size];
    }

    ~QueueImplementation() {
        delete[] q;
    }

    bool full() {
        return count == size;
    }

    bool empty() {
        return count == 0;
    }

    void enqueue(int x) {
        if (!full()) {
            last = (last + 1) % size;
            q[last] = x;
            count++;
        } else {
            cout << "Queue is full\n";
        }
    }

    void dequeue() {
        if (!empty()) {
            first = (first + 1) % size;
            count--;
        } else {
            cout << "Queue is empty\n";
        }
    }

    int front() {
        if (!empty()) {
            return q[first];
        }
        throw out_of_range("Queue is empty");
    }

    int back() {
        if (!empty()) {
            return q[last];
        }
        throw out_of_range("Queue is empty");
    }

    void display() {
        if (empty()) {
            cout << "Queue is empty\n";
            return;
        }

        for (int i = 0; i < count; ++i) {
            cout << q[(first + i) % size] << " ";
        }
        cout << "\n";
    }
};

int main() {
    QueueImplementation q(5);

    q.enqueue(1);
    q.enqueue(2);
    q.enqueue(3);
    q.enqueue(4);
    q.enqueue(5);

    q.display(); // Should show all 5 elements

    cout << "Front: " << q.front() << "\n";
    cout << "Back: " << q.back() << "\n";

    q.dequeue(); // Removes 1
    q.dequeue(); // Removes 2

    q.display(); // Should show 3, 4, 5

    q.enqueue(6);
    q.enqueue(7); // Wraps around

    q.display(); // Should show 3 4 5 6 7
}
