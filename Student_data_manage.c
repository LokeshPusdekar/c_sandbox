
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

void search(student* s, int size)
{   
    int choice,id,k=0,found=0;
    char Name[20];

    printf("Search by: \n(1)Id\n(2)Name \n");
    scanf("%d",&choice);

    if (choice == 1)
    {
        printf("Enter the Student Roll Number:");
        scanf("%d",&id);

        for (int k = 0; k < size; k++)
        {
            if (s[k].rollno == id)
            {   
                printf(">>Student %d:\n",k+1);
                printf("Name: %s\n",s[k].name);
                printf("Roll no.: %d\n",s[k].rollno);
                printf("Section: %c\n",s[k].section) ;
                printf("\n");
                found = 1;
            } 
        } 

        if (found == 1)
        {
            printf("Student with Roll No. %d is found.\n", id);
        }
        else
        {
            printf("Student with Roll No. %d is not found.\n", id);
        }
            
    }
    else if (choice == 2)
    {
        printf("Enter the Student Name:");
        scanf("%s",Name);

        for (int k = 0; k < size; k++)
        {
            if (strcmp(s[k].name, Name) == 0)
            {   
                printf(">>Student %d:\n",k+1);
                printf("Name: %s\n",s[id].name);
                printf("Roll no.: %d\n",s[id].rollno);
                printf("Section: %c\n",s[id].section);
                printf("\n");  
                found = 1;
                break;      
            }
        }

        if (found == 1)
        {
            printf("Student with Name: %s is found.\n", Name); 
        } 
        else
        {
            printf("Student with Name: %s is not found.\n",Name);
        }        
    }
    else
    {
        printf("Invalid search option.\n");
    }
    
}

void update(student* s, int size)
{       
    int choice,id,update=0,i,roll,sec,count;
    char name[20],upd_name[20];

    printf("Update by: \n(1)Id\n(2)Name \n");
    scanf("%d",&choice);

    if (choice == 1)
    {       
        printf("Enter the Student Roll Number:");
        scanf("%d",&id);

        for (int k = 0; k < size; k++)
        {
            if (s[k].rollno == id)
            {
                count = k;
            }
            
        }
        
        printf("What do you want to Update:\n(1)Name \n(2)Roll number \n(3)Section\n");
        scanf("%d",&i);

        if (i == 1)
        {   
            printf("Enter the new name:\n");
            scanf("%s",upd_name);
            strcpy(s[count].name, upd_name);
            update = 1;
        }
        else if (i == 2)
        {
            printf("Enter the new Roll number:\n");
            scanf("%d",&roll);
            s[count].rollno = roll;
            update = 1;
        }
        else if (i == 3)
        {
            printf("Enter the new Section:\n");
            scanf("%d",&sec);
            s[count].section = sec;
            update = 1;
        }
        else
        {
            printf("Invalid Choice.\n");
        }
      
        if (update == 1)
        {
            printf("Student with Roll No. %d is updated.\n", id); 
        }  
        else
        {
            printf("Student with Roll No. %d is not updated.\n", id);
        }     
    }

    else
    {
        printf("Invalid search option.\n");
    }
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
        // case 5:
        //     delete(s, &size);
        //     break;
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