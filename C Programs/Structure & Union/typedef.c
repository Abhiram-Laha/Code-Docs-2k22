#include<stdio.h>

typedef struct car
{
    char name[60];
    int seat;
    float milege;
}car;

void prt(car arr[],int n){
    for(int i=0; i<n; i++){
        printf("\nName : %s\nSeat : %d\nMilege : %.2f",arr[i].name,arr[i].seat,arr[i].milege);
    }
}


int main(){
   car c1={.seat=5,.name="Hero",.milege=65};
   printf("%s %d %f\n",c1.name,c1.seat,c1.milege);

    int n;
    printf("Total Data want to Enter : ");
    scanf("%d",&n);
    car cars[n];


    for(int i=0; i<n; i++){
        printf("\nEnter Name %d : ",i+1);
        scanf("%s",&cars[i].name);

        printf("Enter Seats: ");
        scanf("%d",&cars[i].seat);

        printf("Enter Milege : ");
        scanf("%f",&cars[i].milege);
    }

   // for(int i=0; i<n; i++){
   //     printf("\nName : %s\nSeat : %d\nMilege : %.2f",cars[i].name,cars[i].seat,cars[i].milege);
   // }

    prt(cars,n);



    return 0;
}