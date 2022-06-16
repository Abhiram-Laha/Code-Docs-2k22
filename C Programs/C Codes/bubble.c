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

        for(int j=0; j<n-i; j++){

            if(arr[j]>arr[j+1]){
                swap(&arr[j],&arr[j+1]);
            }
        }

    }

    printf("\nSorted Array : ");
    for(int i=0; i<n; i++){
        printf("%d ",arr[i]);
    }


}