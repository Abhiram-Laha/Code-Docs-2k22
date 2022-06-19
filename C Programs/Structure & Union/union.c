#include<stdio.h>
#include<stdlib.h>

struct xyz
{
    int x;
    float y;
    char z;
    
}xyz;


union abc{
    int a;
    char b;
    float c;
}abc;

int main(){
    
    abc.a = 5;
    printf("a : %d\n",abc.a);

    abc.b = 'k';
    printf("b : %c\n",abc.b);

    abc.c = 17.56;
    printf("c : %.2f\n",abc.c);

    struct xyz m={7,65.325,65};
    //printf("%c",m.z);


    printf("Size of Structure : %d\nSize of Union : %d",sizeof(m),sizeof(abc));

    

    return 0;
}