
// Student Management System

#include<stdio.h>
#include<string.h>


typedef struct student
{
    int rollno;
    char name[20];
    char section;
}student;

void store(student* s, int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("Enter the details of student repectively:(Roll no., Name, Section):\n");
        scanf("%d%s %c",&s[i].rollno,s[i].name,&s[i].section);
    }
    // printf("\n");
}

void display(student* s, int size)
{
    for (int i = 0; i < size; i++)
    {
        printf(">>Student %d\nName: %s\nRoll no.: %d\nSection: %c",i+1,s[i].name,s[i].rollno,s[i].section);
        printf("\n\n");
    }
    // printf("\n");
}


int main()
{   
    int size=3,n,i=0;
    //student* s = (int*) malloc (size * sizeof(student));
    student s[100];

    printf("How many student details you want to enter:");
    scanf("%d",&size);

    while(i == 0)
    {
        printf("\n");
        printf("Menu (Enter no. to select from the Menu):\n");
        printf("(1)Create \n(2)Display \n(3)Search \n(4)Update \n(5)Delete \n(6)Exit Menu\n");
        scanf("%d",&n);
        printf("\n");

        switch (n)
        {
        case 1:
            store(s, size);
            break;

        case 2:
            display(s, size);
            break;

        case 3:
            search(s, size);
            break;

        case 4:
            update(s, size);
            break;
        case 5:
            delete(s, &size);
            break;
        case 6:
            i = 1;
            printf("Exiting.......");
            break;
        
        default:
            printf("Invalid Option Selected.");
            break;
        }
    }
    
    return 0;
}