#include<stdio.h>

int natural(int n){
    if(n<=50){
        printf("%d ",n);
        return natural(n+1);
    }
}

int main(){
    int x=1;
    printf("Natural Numbers : ");
    natural(x);
    return 0;
}