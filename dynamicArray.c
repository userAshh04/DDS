
#include <stdio.h>
#include <stdlib.h>
int main() {
    int n;

  
    printf("Enter the size in array :");
    scanf("%d",&n);
    int *arr=(int*)malloc(n*sizeof(int));
    for(int i=0;i<=n;i++){
        printf("enter the value at an arr[%d]index  \n \n",i);
        scanf("%d",&arr[i]);
        
    }
    
    for(int i=0;i<=n;i++){
        printf("%d \n",arr[i]);
    }
    int newsize;
     printf("Enter the new size in array :");
    scanf("%d",&newsize);
    int *newarr=(int*)realloc(arr,newsize*sizeof(int));
      for(int i=0;i<=newsize;i++){
        printf("enter the value at an arr[%d]index \n",i);
        scanf("%d",&newarr[i]);
    }
    printf("all values in newarr /n");
       for(int i=0;i<=n;i++){
        printf("%d \n",newarr[i]);
    }
    return 0;
