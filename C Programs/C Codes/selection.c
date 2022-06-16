#include<stdio.h>

void swap(int *x,int *y){
    int temp;
    temp=*x;
    *x=*y;
    *y=temp;
}

int main(){

    int n;
    printf("Array Size : ");
    scanf("%d",&n);

    int arr[n];
    
    printf("Enter Values : ");
    for(int i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }

    for(int i=0; i<n-1; i++){

        for(int j=i+1; j<n; j++){
            
            if(arr[j]<arr[i]){
                swap(&arr[i],&arr[j]);
            }
        }
    }

    printf("\nSorted Array : ");
    for(int i=0; i<n; i++){
        printf("%d ",arr[i]);
    }



return 0;
}