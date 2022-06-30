// Passing the Structure variable as an argument.

#include<stdio.h>

typedef struct bio{
    char name[50];
    int age;
}bio;

void prt(bio p){
    printf("%s %d\n",p.name,p.age);
}

int main(){
    bio p1={"Ram",27},p2={"Syam",25},p3={"Ravan",32};

    prt(p1);
    prt(p2);
    prt(p3);



    return 0;
}