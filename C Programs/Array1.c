#include<stdio.h>

int main(){

    float arr[10],sum=0;

    printf("Enter 10 values : ");

    for(int i=0; i<10; i++){
        scanf("%f",&arr[i]);
        sum+=arr[i];
    }
    
    printf("\n");

    for (int i=0; i<10; i++){
        printf("x[ %d] = %.2f \n",i+1,arr[i]);
    }

    printf("\nTotal : %.2f",sum);

    

    return 0;
}