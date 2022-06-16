#include<stdio.h>

void fib(int);

void main(){
    int n;
    n=12;
    fib(n);
}

void fib(int x){
    int a=0,b=1;
    
    printf("Series : %d %d ",a,b);

    int c=a+b;
    for(int i=1; i<=x; i++){
        c=a+b;
        a=b;
        b=c;
        printf("%d ",c);
    }

}