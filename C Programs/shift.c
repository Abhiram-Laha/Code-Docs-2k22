#include<stdio.h>

int main(){
    
    int arr[50],n;

    printf("Enter Total Elements to be  Entered : ");
    scanf("%d",&n);
    
    printf("Enter Values : ");
    for(int i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }

    int p,v;
    printf("Enter Position and Value : ");
    scanf("%d %d",&p,&v);

    for(int i=n+1; i>=p; i--){
        arr[i+1]=arr[i];
    }

    arr[p]=v;
    
    printf("\nUpdated Array : ");
    for(int i=0; i<n+1; i++){
        printf("%d ",arr[i]);
    }



    return 0;
}