
#include <stdio.h>

int main() {
    int arr[]={2,1,4,3,5,9};
    int find=9;
    int index=-1;
    for( int i=0;i<=5;i++){
        if(arr[i]==find){
           index=i;
   }
}
   printf("%d \n",index);
}
