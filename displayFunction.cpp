 void display(){
if(top==-1){
    cout<<"stack is underflow"<<endl;
}
        else{
            for(int i=top;i>=0;i--){
            cout << stack[i]<<endl;
}
        }
