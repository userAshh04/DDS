#include <iostream>
using namespace std;
struct node{
    int data;
    node *next;
};
node *head=NULL;

void insertStart(int num){
    node*newNode=new node();
    newNode->data=num;
    head =newNode;
    cout<<num<<"inserted at Start"<<endl;
}
void traverse(){
    node*temp=head;
    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp =temp->next;
    }
    cout<<"NULL";
}

void insertEnd(int num){
    node *newNode=new node();
    newNode -> data=num;
    newNode -> next=NULL;
    if(head==NULL){
        head=newNode;
        cout<<num<<"inserted at End"<<endl;
    }
    else{
        node*temp=head;
        while(temp->next!=NULL){
            temp =temp->next;
        }
        temp -> next=newNode;
        cout<<num<<"inserted at End "<<endl;
       }
    }
int main (){
    insertEnd(10);
    insertEnd(20);
    insertEnd(30);
    insertEnd(40);
    insertStart(50);
    traverse();
}
