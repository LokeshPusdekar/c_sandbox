#include<stdio.h>

int main()
{
    char name[20];
    printf("Enter your name:");
    scanf("%s",name);
    printf("Your name: %s", name);
    int i=0;
    while ( i != '\0')
    {
        i++;
    }
    printf("\nThe character in the string is %d", i);
    

}