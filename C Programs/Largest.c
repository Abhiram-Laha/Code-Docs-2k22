#include<stdio.h>

int main(){
    int n;
    printf("Enter the Size : ");
    scanf("%d",&n);

    int arr[n];
    
    printf("Enter Values : ");
    for(int i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }

    int max=arr[0];
    for(int i=0; i<n; i++){
        if(max<arr[i]){
            max=arr[i];
        }
    }

    printf("\nThe Largest Number : %d",max);
    return 0;
}