#include <iostream>

using namespace std;

class Queue {
private:
    int *arr;
    int capacity;
    int front, back;

public:
    Queue(int size) {
        capacity = size;
        arr = new int[capacity];
        front = -1;
        back = -1;
        cout << "Queue of size " << capacity << " has been created" << endl;
    }

    void push(int value) {
        if (back == capacity - 1) {
            cout << "Overflow" << endl;
            return;
        }
        if (front == -1) 
            front = 0; 
        
        arr[++back] = value;
    }

    void pop() {
        if (front == -1 || front > back) {
            cout << "Underflow" << endl;
            return;
        }
        
        // Shifting elements using a for loop
        for (int i = front; i < back; i++) {
            arr[i] = arr[i + 1]; // Shift all elements one position left
        }
        
        // After shifting, reduce the back pointer
        back--;
        
        if (back == -1) {
            front = -1; // Reset front if the queue becomes empty
        }
    }

    int front_element() {
        if (front == -1 || front > back) {
            cout << "Underflow" << endl;
            return -1;
        }
        return arr[front];
    }

    ~Queue() {
        if (arr) {
            delete[] arr;
            arr = nullptr;
        }
        cout << "Memory freed" << endl;
    }
};

int main() {
    Queue q1(6);
    q1.push(4);
    q1.push(2);
    q1.push(5);
    q1.push(67);
    q1.push(928);
    q1.push(1301); 
    cout << "Front element: " << q1.front_element() << endl;
    
    q1.pop();
    q1.pop();
    q1.pop();
    q1.pop();
    
    cout << "Front element after pops: " << q1.front_element() << endl;
   
    return 0;
}