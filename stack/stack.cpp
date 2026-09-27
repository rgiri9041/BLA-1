#include <iostream>
using namespace std;

class Stack {
private:
    static const int SIZE = 5;    
    int arr[SIZE];                
    int top;                     

public:
     Stack() : top(-1) {}

     void push(int value) {
        if (isFull()) {
            cout << "Stack Overflow! Cannot push " << value << endl;
            return;
        }
        arr[++top] = value;
        cout << "Pushed: " << value << endl;
    }

     int pop() {
        if (isEmpty()) {
            cout << "Stack Underflow! Cannot pop" << endl;
            return -1;
        }
        int value = arr[top--];
        cout << "Popped: " << value << endl;
        return value;
    }

     int peek() {
        if (isEmpty()) {
            cout << "Stack is empty" << endl;
            return -1;
        }
        return arr[top];
    }

     bool isEmpty() {
        return top == -1;
    }

     bool isFull() {
        return top == SIZE - 1;
    }

     void displayAll() {
        if (isEmpty()) {
            cout << "Stack is empty" << endl;
            return;
        }
        cout << "Stack (top -> bottom): ";
        for (int i = top; i >= 0; i--) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

int main() {
    Stack s;

    cout << "=== ARRAY-BASED STACK DEMO ===" << endl << endl;

    cout << "Is stack empty? " << (s.isEmpty() ? "Yes" : "No") << endl;
    cout << endl;

    cout << "--- Pushing 10, 20, 30 ---" << endl;
    s.push(10);
    s.push(20);
    s.push(30);
    cout << endl;

    cout << "--- Display ---" << endl;
    s.displayAll();
    cout << endl;

    cout << "Top element (peek): " << s.peek() << endl;
    cout << endl;

    cout << "--- Popping ---" << endl;
    s.pop();
    s.displayAll();
    cout << endl;

    cout << "--- Fill the stack to test overflow ---" << endl;
    s.push(40);
    s.push(50);
    s.push(60);   // This should trigger overflow
    s.displayAll();
    cout << endl;

    cout << "Is stack full? " << (s.isFull() ? "Yes" : "No") << endl;
    cout << endl;

    cout << "--- Empty the stack to test underflow ---" << endl;
    s.pop();
    s.pop();
    s.pop();
    s.pop();
    s.pop();      // This should trigger underflow
    cout << endl;

    cout << "Is stack empty? " << (s.isEmpty() ? "Yes" : "No") << endl;

    return 0;
}