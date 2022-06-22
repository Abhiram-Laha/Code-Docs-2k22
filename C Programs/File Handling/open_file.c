#include<stdio.h>

int main(){

    FILE* fptr;

    fptr=fopen("text1.txt","r");

    if(fptr!=NULL){
        printf("File Opened Succefully!! ");
    }
    else{
        printf("File Not Opened !!");
    }

    return 0;
}