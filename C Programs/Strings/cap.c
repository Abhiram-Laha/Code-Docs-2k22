#include<stdio.h>
#include<string.h>


void lower(char str[]){
    for(int i=0; i<strlen(str); i++){
        printf("%c",str[i]-32);
    }
}

void upper(char str[]){
    for(int i=0; i<strlen(str); i++){
        printf("%c",str[i]+32);
    }
}


int main(){
    char str[50];
    printf("Enter a String : ");
    gets(str);

    printf("Lower to Upper : ");
    lower(str);

    printf("\nUpper to Lower : ");
    upper(str);
}