#include<stdio.h>

struct emp
{
    char *name;
    int age;
    int salary;
};

void manager(){
    struct emp man;
    printf("\nEnter Age of Manager :");
    scanf("%d",&man.age);
    //man.age=32;

    if(man.age>30){
        man.salary=65000;
    }
    else{
        man.salary=55000;
    }
    printf("Salary of Manager : %d",man.salary);
}



int main(){

    struct emp emp1,emp2;
    printf("Enter Name, Post, Age, Salary 1 : ");
    scanf("%s %d %d",&emp1.name,&emp1.age,&emp1.salary);

    printf("\nEnter Name, Post, Age, Salary 2 : ");
    scanf("%s %d %d",&emp2.name,&emp2.age,&emp2.salary);

    printf("\nSalary of emp1 : %d\nSalary of emp2 : %d\n",emp1.salary,emp2.salary);

   manager();

    return 0;
}