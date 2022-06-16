#include<stdio.h>

struct{
    char *name;
    char *color;
    int ram;
    int battery;
}lap1,lap2;

int main(){

    lap1.name="Apple G16";
    lap1.color="Silver";
    lap1.ram=16;
    lap1.battery=15000;

    printf("\nDetails of Laptop 1 :\n");
    printf("Name : %s\nColor : %s\nRam : %d\nBattery : %d\n ",lap1.name,lap1.color,lap1.ram,lap1.battery);


    lap2.name="Acer Predator";
    lap2.color="Black";
    lap2.ram=16;
    lap2.battery=20000;

printf("\nDetails of Laptop 2 :\n");
    printf("Name : %s\nColor : %s\nRam : %d\nBattery : %d\n ",lap2.name,lap2.color,lap2.ram,lap2.battery);

    return 0;
}
