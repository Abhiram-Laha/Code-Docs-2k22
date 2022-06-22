#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){

    FILE* fptr;

    fptr=fopen("text1.txt","a+");

    if(fptr!=NULL){
        printf("File Opened Succesfully.!!\n");
    }
    else{
        printf("ERROR !! Filw Not Opened !! ");
        exit(0);
    }

    char str[500];
    printf("Enter a String : ");
    gets(str);

    fputs(str,fptr);

    fclose(fptr);



    return 0;
}