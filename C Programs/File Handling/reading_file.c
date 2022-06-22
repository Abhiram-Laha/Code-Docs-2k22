#include<stdio.h>
#include<stdlib.h>

int main(){

    FILE* fptr;

    char text[500];


    fptr=fopen("text1.txt","r");

    if(fptr!=NULL){
        printf("File Opened Succefully!! \n");

        printf("\nContent inside text File : \n\n");

        while( fgets(text,500,fptr) ){
            printf("%s",text);

        }
        
    }
    else{
        printf("File Not Opened !!");
        exit(0);
    }

    fclose(fptr);


    

    return 0;
}