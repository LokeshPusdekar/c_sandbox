
// Student Management System

#include<stdio.h>
#include<string.h>


typedef struct student
{
    int rollno;
    char name[20];
    char section;
}student;

int store(student* s, int index, int size)
{   
    int choice,increment_size=0;
    //increment_size = index + size;
    
    for (int i = 0; i < size; i++)
    {
        printf("Enter the details of student repectively:(Roll no., Name, Section):\n");
        scanf("%d%s %c",&s[index].rollno,s[index].name,&s[index].section);
        index++;
    }
    printf("%d Student details is added to the Database.\n",index);

        
    // printf("\n");
    return index;
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

void delete(student* s, int *size)
{
    int choice,id,k=0,delete=0,index;
    char Name[20];

    printf("Search by: \n(1)Id\n(2)Name \n");
    scanf("%d",&choice);

    if (choice == 1)
    {
        printf("Enter the Student Roll Number:");
        scanf("%d",&id);

        for (int j = 0; j < *size; j++)
        {
            if (s[j].rollno == id)
            {
                index = j;
                break;
            }
            
        }
        
        for (int k = index; k < *size - 1; k++)
        {
            s[k].rollno =s[k+1].rollno;  
            strcpy(s[k].name, s[k+1].name); 
            s[k].section =s[k+1].section; 
            delete = 1;
            (*size)--;
        }   

        if (delete == 1)
        {
            printf("Student with Roll No. %d is deleted.\n", id); 
        }  
        else
        {
            printf("Student with Roll No. %d is not deleted.\n", id);
        }     
    }
    else if (choice == 2)
    {
        printf("Enter the Student Name:");
        scanf("%s",Name);

        for (int j = 0; j < *size; j++)
        {
            if (strcmp(s[j].name, Name)  == 0)
            {
                index = j;
                break;
            }
            
        }    

        for (int k = index; k < *size - 1; k++)
        {
            s[k].rollno =s[k+1].rollno;  
            strcpy(s[k].name, s[k+1].name); 
            s[k].section =s[k+1].section; 
            delete = 1;
            (*size)--;
        }

        if (delete == 1)
        {
            printf("Student with Roll No. %s is deleted.\n", Name); 
        }  
        else
        {
            printf("Student with Roll No. %s is not deleted.\n", Name);
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
    else if (choice == 2)
    {
        printf("Enter the Student Name:");
        scanf("%s",name);

        for ( int k= 0; k < size; k++)
        {
            if (strcmp(s[k].name, name) == 0)
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
            printf("Student with Name: %s is updated.\n", name); 
        }  
        else
        {
            printf("Student with Name: %s is not updated.\n", name);
        }     
    }
    else
    {
        printf("Invalid search option.\n");
    }
}

// int array_size(student s)
// {   
//     int size;
//     printf("How many student details you want to enter:");
//     scanf("%d",&size);
//     return size;
// }

int main()
{   
    int size,n,i=0,index=0;
    //student* s = (int*) malloc (size * sizeof(student));
    student s[100];

    //size = array_size(*s);

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
            printf("How many student details you want to enter:");
            scanf("%d",&size);
            index = store(s,index,size);
            break;

        case 2:
            display(s, index);
            break;

        case 3:
            search(s, index);
            break;

        case 4:
            update(s, index);
            break;
        case 5:
            delete(s, &index);
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