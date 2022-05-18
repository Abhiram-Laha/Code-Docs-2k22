#include<stdio.h>

int main(){

    printf("Enter the Size : ");
    int n;
    float sum=0;

    scanf("%d",&n);

    float arr[n];

    printf("Enter values : ");
    for(int i=0; i<n; i++){
        scanf("%f",&arr[i]);
        sum+=arr[i];
    }

    printf("\nAverage of the Array : %.2f",(sum/n));

    return 0;
}