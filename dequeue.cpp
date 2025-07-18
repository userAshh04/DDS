#include <iostream>
using namespace std;

#define size 5
int queue[size];
int rear = -1, front = -1;

void enqueue(int num) {
    if (rear == size - 1) {
        cout << "Overflow" << endl;
    }
    else if (rear == -1 && front == -1) {
        front = rear = 0;
        queue[rear] = num;
        cout << num << " inserted" << endl;
    }
    else {
        rear++;
        queue[rear] = num;
        cout << num << " inserted" << endl;
    }
}

void dequeue() {
    if (front == -1 && rear == -1) {
        cout << "Underflow" << endl;
    }
    else if (front == rear) {
        cout << queue[front] << " removed" << endl;
        front = rear = -1;
    }
    else {
        cout << queue[front] << " removed" << endl;
        front++;
    }
}

int main() {
    enqueue(10);
    enqueue(20);
    enqueue(30);
    enqueue(40);
    enqueue(50);

    dequeue();
    dequeue();
    dequeue();
    dequeue();
    dequeue();
    dequeue(); 

    return 0;
}

