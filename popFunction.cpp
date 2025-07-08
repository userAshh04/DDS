
#include <iostream>
using namespace std;
#define size 5
int stack[size];
int top=-1;
 void push(int num){
    if(top<size-1){
        top++;
        stack[top]=num;
        cout<<num  <<"inserted"<<endl;
    }    
        else{
            cout<<"stack is overflow"<<endl;
        }
        
    }
    void pop(){
if(top==-1){
    cout<<"stack is underflow"<<endl;
}
        else{
            cout << stack[top]<<"removed"<<endl;
top--;
        }
        
    }
int main (){
    push(46);
    push(88);
    push(11);
    push(99);
    pop();
    pop();
    
    return 0;
}
