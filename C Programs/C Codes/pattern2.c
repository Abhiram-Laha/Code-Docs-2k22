#include <stdio.h>

int main() {
    int arr[5]={1,2,3,4,5};
    int rev[5];
    int n=5;
    
    for(int i=0; i<n; i++){
        rev[i]=arr[n-(i+1)];
    }
    
    for(int i=0; i<n; i++){
        printf("%d ",rev[i]);
    }
    
    return 0;
}