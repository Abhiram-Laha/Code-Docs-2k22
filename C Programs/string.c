#include<stdio.h>

void printstr(char str[]){
    int i=0;
    while(str[i]=='\0'){
        printf("%c",str[i]);
        i++;
    }
}

int main(){
    char str1[]="Hello World";
    printf("Str 1 : ",printstr(str1));-+++++++++++++++++++++++++++++++++++++



    char str2[10]={'H','I','I','\0'};

    char str3[50];
    gets(str3);

    return 0;
}