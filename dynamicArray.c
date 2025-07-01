
#include <stdio.h>
#include <stdlib.h>
int main() {
    int n;
    printf("Enter the size if array :");
    scanf("%d",&n);
    int *arr=(int*)malloc(n*sizeof(int));
    for(int i=0;i<=n;i++){
        printf("enter the value at an arr[%d]index \n",i);
        scanf("%d",&arr[i]);
        
    }
    
    for(int i=0;i<=n;i++){
        printf("%d \n",arr[i]);
    }
    return 0;
}
