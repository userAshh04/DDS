
#include <iostream>
#include <cctype>
using namespace std;
#define size 100
char stack[size];
int top=-1;
void push(int num){
    top++;
    stack[top]=num;
}
char pop(){
    char topValue=stack[top];
    top--;
    return topValue;
}
int evaluatepostfix(char arr[]){
    int i=0;
    while(arr[i]!='\0'){
        char ch =arr[i];
        if(isalnum(ch)){
            push(ch-'0');
        }
        else if(ch=='+' || ch=='-' || ch=='*' || ch=='^'){
                int b=pop();
                int a=pop();
              
                switch(ch){
                    case '+':
                    push(b+a);
                    break;
                    
                    case '-':
                    push(b-a);
                    break;
                    
                    case '*':
                    push(b*a);
                    break;
                    
                    case '/':
                    push(b/a);
                    break;
                    
                    case '^':
                    push(b^a);
                    break;
                }
                }
    i++;    
            }
            
            return pop();
            
        }
    
int main(){
   char postfix[size];
   cout<<"enter a expression";
   cin>>postfix;
   int ans=evaluatepostfix(postfix);
   cout<<ans;

    return 0;
}
