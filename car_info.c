#include<stdio.h>

struct car
{
    char name[20],engine[20];
    int price,wheels,doors,t_speed,avg;
};

int main()
{   
    struct car c[10];
    int num;

    printf("Enter the number of car details you want enter:");
    scanf("%d",&num);

    for (int i = 0; i < num; i++)
    {
        printf("Enter the name of the car: ");
        scanf("%s",c[i].name);

        printf("Enter the number of Wheels & Doors in the car: ");
        scanf("%d%d",&c[i].wheels,&c[i].doors);

        printf("Enter the Top Speed and Average of the car: ");
        scanf("%d%d",&c[i].t_speed,&c[i].avg);

        printf("Enter the Price of the car: ");
        scanf("%d",&c[i].price);

        printf("Car Characteristics:\nNmae: %s \nPrice: %d \nNo. of wheels: %d \nNo. of doors: %d \nTop Speed: %d \nAverage of the car: %d",c[i].name,c[i].price,c[i].wheels,c[i].doors,c[i].t_speed,c[i].avg);

    }
    
    return 0;
}