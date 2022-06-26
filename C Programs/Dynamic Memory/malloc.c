#include<stdio.h>
#include<stdlib.h>

int main(){

    int n;
    printf("Enter Number of Integers : ");
    scanf("%d",&n);

    int *ptr=(int*)malloc(n*sizeof(int));

    if(ptr==NULL){
        printf("Memory not Available.");
    }


    printf("Enter Integers : ");
    for(int i=0; i<n; i++){
        scanf("%d",ptr+i);
    }

    printf("\nIntegers Stored : ");
    for(int i=0; i<n; i++){
        printf("%d ",*(ptr+i));
    }

    return 0;
}