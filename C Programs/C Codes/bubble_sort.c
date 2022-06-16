#include<stdio.h>

int main(){

    int n;
    printf("Array Size : ");
    scanf("%d",&n);

    int arr[n];
    
    printf("Enter Values : ");
    for(int i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }

    int c=1;
    while(c<n){

        for(int i=0; i<n-c; i++){
            if(arr[i]>arr[i+1]){
              int temp=arr[i];
              arr[i]=arr[i+1];
              arr[i+1]=temp;
            }
        }
    c++;
    }

    printf("\nSorted Array : ");
    for(int i=0; i<n; i++){
        printf("%d ",arr[i]);
    }


    return 0;
}