#include<stdio.h>
#include<string.h>

int main(){
    char str[50];
    printf("Enter Your Name : ");
    gets(str);

    for(int i=0; i<strlen(str); i++){
        printf("%d ",str[i]);
    }
    return 0;
}