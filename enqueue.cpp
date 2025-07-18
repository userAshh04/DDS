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

int main() {
    enqueue(10);
    enqueue(20);
    enqueue(30);
    enqueue(50);
    enqueue(80);
    enqueue(90); // This will cause "Overflow" because max size is 5

    return 0;
}
