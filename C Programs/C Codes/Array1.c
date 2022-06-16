#include<stdio.h>

int main(){

    int n,arr[n],sum=0;
    printf("Enter n : ");
    scanf("%d",&n);

    printf("Enter values : ");

    for(int i=0; i<10; i++){
        scanf("%d",&arr[i]);
        sum+=arr[i];
    }
    
    printf("\n");

    for (int i=0; i<10; i++){
        printf("x[ %d] = %d \n",i+1,arr[i]);
    }

    printf("\nTotal : %d",sum);

    

    return 0;
}