#include<stdio.h>
#include<string.h>

int main(){
    char str[]="COMPUTER";

    int l=strlen(str);

    for(int i=0; i<l; i++){
        for(int j=0; j<=i; j++){
            printf("%c",str[j]);
        }
        printf("\n");
    }
}