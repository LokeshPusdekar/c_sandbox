#include<stdio.h>

struct student
{
    int rollno,marks;
    char name[20];
};


int main()
{   
    struct student s1;

    printf("Enter the roll number of student:");
    scanf("%d",& s1.rollno);

    printf("Enter the name of the student:");
    scanf("%s",s1.name);

    printf("Enter the marks of student:");
    scanf("%d",& s1.marks);

    printf("Roll no. = %d \nName = %s \nMarks = %d",s1.rollno,s1.name,s1.marks);
}