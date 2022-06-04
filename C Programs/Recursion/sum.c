#include<stdio.h>

int sum(int n){
    int res;
    if(n==1){
        return 1;
    }
    else{
        res=( n + sum(n-1) );
        return res;
    }
}



int main(){
    int x=15;
    printf("Sum : %d ",sum(x));
    
}