#include<stdio.h>

typedef struct charset{
    char i;
    int j;
}charset;

typedef struct student
{
    char name[50];
    int roll;
    float marks;
}student;


//void prt(char* i,int* j){
 //   scanf("%c %d",i,j);
//}

void ptr(char a[],int b,float c){
    printf("%s %d %.2f",a,b,c);
}

int main(){

    charset a;
   // prt(&a.i,&a.j);
    
    printf("You Entered : ");
   // printf("%c %d",a.i,a.j);

    student s1={"Raj",21,79.5};
    
    ptr(s1.name,s1.roll,s1.marks);
    

    return 0;
}