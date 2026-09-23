#include <iostream>
using namespace std;

class CircularQueue{
    private:
        static const int SIZE = 5;
        int array[SIZE];
        int start;
        int rear;
        int count;
    
    public:
        CircularQueue() : start(0), rear(-1), count(0){}

        //check queue is empty or not
        bool isEmpty(){
            return count == 0;
        }

        //check queue is full or not

        bool isFull(){
            return count == SIZE;
        }


        //enqueue-- add element 
        void enqueue(int value){
            if (isFull()){
                cout << "Queue is Overflow. Cannot enqueue"<< value << endl;
                return;
            }
            rear = (rear+1)%SIZE;  // This is to wrap around formula if there is space is the bginning of queue the use it
            array[rear] = value;
            count++;
            cout << "Enqueue: " <<value << endl;
        }

        //dequeue -- remove elements

        int dequeue(){
            if(isEmpty()){
                cout << "Queue Underflow, cannot dequeue" << endl;
                return -1;
            }
            int value = array[start];
            start = (start +1)% SIZE;
            count--;
            cout << "Dequeue: " << value<< endl;
            return value;
        }

        //displayAll() -- to show all element of queue

        void displayAll(){
            if (isEmpty()){
                cout << "Queue is empty"<< endl;
                return;
            }
            cout << "Queue's elements are"<< endl;
            int i = start;
            for(int j = 0; j < count; j++){
                cout << array[i]<< " ";
                i = (i+1)% SIZE;
            }
            cout << endl;

        };

    };



int main(){

    CircularQueue q;
    cout << " ----  CIRCULAR QUEUE  ----  " << endl << endl;
    
    q.enqueue(10);
    q.enqueue(15);
    q.enqueue(12);
    q.enqueue(17);
    q.displayAll();

    cout << "is queue full?" << (q.isFull() ? "Yes" : "No") << endl<<endl;
    q.dequeue();
    q.displayAll();

    return 0;

}
