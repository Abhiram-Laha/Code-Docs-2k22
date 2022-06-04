#include<stdio.h>
#include<string.h>

int main(){
    char str[]="Hello World\n";

    char str1[50]="Good Morning";

    printf("%s",str);

    //gets(str1);
    printf("%s %d",str1,strlen(str1));

    for(int i=strlen(str1)-1; i>=0; i--){
        printf("\n%c",str1[i]);
    }




    return 0;
}