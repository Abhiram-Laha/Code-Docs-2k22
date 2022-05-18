#include<stdio.h>
int main(){
    int flag=0,sum=0;
    for(int i=50; i<=100; i++){
        if(i%2==0 && i%3==0){
            sum+=i;
            flag++;
        }
    }

    printf("Sum : %d",sum);
    printf("\nAverage : %d",sum/flag);
    return 0;
}