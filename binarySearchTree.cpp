#include <iostream>
using namespace std;
  struct Node{
      int data;
      Node*left;
      Node*right;
  
  Node(int val){
      data=val;
      left=right=nullptr;
  }
};
Node*insert(Node*root,int val){
    if(root==nullptr){
        return new Node(val);
    }
    else if(val<root->data){
        root->left=insert(root->left,val);
    }
    else if(val>root->data){
        root->right=insert(root->right,val);
    }
    return root;
}

void inorder(Node*root){
    if(root){
        inorder(root->left);
        cout<<root->data<<" ";
        inorder(root->right);
    }
}
int search(Node*root,int val){
    if(root == nullptr){
        return 0;
    }
    if(val==root->data){
        return 1;
    }
    else if(val<root->data){
        return search(root->left,val);
    }
    else if(val>root->data){
        return search(root->right,val);
    }
    return 0;
}

int main(){
    int n;
   
    cout<<"Enter the no of nodes:";
    cin>>n;
    int *arr=new int[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    Node*root=nullptr;
    for(int i=0;i<n;i++){
        root=insert(root,arr[i]);
    }
    cout<<endl;
    inorder(root);
    cout<<endl;
    int ans=search(root,11);
    if(ans==1){
        cout<<"found"<<endl;
    }else{
        cout<<"not found";
    }
}
