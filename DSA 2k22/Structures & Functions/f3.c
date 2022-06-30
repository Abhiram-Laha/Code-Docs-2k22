#include<stdio.h>

typedef struct boy
{
    char name[50];
    int age;
}boy;

void check(boy *ptr){
    if((ptr->age)>=18){
            printf("%s is eligible for voting.",ptr->name);
    }
    else{
         printf("%s, You are not eligible for voting.",ptr->name);
    }
}


int main(){

    boy p;
    printf("Enter Name and Age : ");
    scanf("%s %d",&p.name,&p.age);

    check(&p);

    //printf("%s %d",p.name,p.age);
    return 0;
}