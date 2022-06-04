#include<stdio.h>
#include<string.h>
#include<limits.h>

int main(){
    char str[100];
    printf("Enter A Sentence : ");
    gets(str);

    for(int i=0; i<strlen(str); i++){
        if(str[i]!='#'){
            printf("%c",str[i]);
        }
        else{
            break;
        }
    }
    return 0;
}