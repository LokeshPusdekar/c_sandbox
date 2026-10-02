#include<stdio.h>
//nNumber of each character in the string 

int main()
{
    char str[30];
    int i=0,count;
    printf("Enter the String:");
    scanf("%s",str);

    while (str[i] != '\0')
    {
        i++;
    }
    
    printf("Length of the String is:%d",i);
    printf("\nstring:");

    printf("\n");
    for ( i = 0; str[i] != '\0'; i++)
    {   
        if (str[i] == '@')
        {
            continue;
        }
        count = 1;
        for (int j = i+1; str[j] !='\0'; j++)
        {
            if (str[i] == str[j])
            {
                count++;
                str[j] = '@';
            }
            
        }
       
        printf("%c = ",str[i]);
        printf("%d\n",count);    
    }
    
    return 0;
}