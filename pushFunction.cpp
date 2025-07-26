#include <iostream>
using namespace std;

#define size 5
int stack[size];
int top = -1;

void push(int num) {
    if (top == size - 1) {
        cout << "stack is overflow" << endl;
    } else {
        top++;
        stack[top] = num;
        cout << num << " inserted" << endl;
    }
}

int main() {
    push(46);
    push(88);
    push(11);
    push(99);
    push(17);
    push(34);  // This push should trigger overflow

    return 0;
}
