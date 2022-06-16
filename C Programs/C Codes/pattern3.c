#include<stdio.h>

int main(){

    int i,j,rows,k,l=1;

    printf("Enter Rows : ");
    scanf("%d",&rows);

    
    for(i=rows-1; i>=1; i--){

        for(j=1; j<=i; j++){
            printf("+");
        }
        
        for(int y=1; y<=rows-1; y++){
            printf("*");
        }

        

        printf("\n");
    }


return 0;
}