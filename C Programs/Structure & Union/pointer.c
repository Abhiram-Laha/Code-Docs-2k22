#include<stdio.h>

typedef struct detail{
    char *name;
    float per;
}detail;

int main(){

    detail s1={"Ravi",85.6};
    detail s2={"Giyan",90.4};

    detail *ptr=&s1;

    printf("%s  %.2f",ptr->name,(*ptr).per);


    return 0;
}