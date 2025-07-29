
#include <iostream>
using namespace std;
#define size 4
int cq[size];
int front=-1;
int rear=-1;


bool isfull(){
    return (rear+1)%size==front;
}


bool isempty(){
    return front==-1;
}

void enqueue(int num){
    if (isfull()){
        cout<<"queue is full cannot insert"<<endl;
    }
    
    else if(isempty()){
        front=rear=0;
        cq[rear]=num;
        cout<<num<<"inserted"<<endl;
    }
    else {
        rear=(rear+1)%size;
        cq[rear]=num;
        cout<<num<<"inserted"<<endl;
    }
    
}
void dequeue(){
    if(isempty()){
        cout<<"queue is empty cannot removed"<<endl;
    }
    else if(front==rear){
        cout<<cq[front]<<"removed"<<endl;
     front=rear=-1;
    }
    else{
        cout<<cq[front]<<"removed"<<endl;
        front=(front+1)%size;
    }
    
}

void display(){
    if(isempty()){
        cout<<"queue is empty"<<endl;
    }
    else {
        for(int i=front;i!=rear;i=(i+1)%size){
            cout<<cq[i]<<endl;
        }
        cout<<cq[rear];
    }
}

int main(){
    enqueue(10);
    enqueue(50);
    enqueue(19);
    enqueue(90);
       
    dequeue();
    dequeue();
    enqueue(99);
    display();
    
    
}


