#include<stdio.h>

void anagram(char* str1, char* str2)
{
    int i=0,j=0,flag=0,x=0;

    while(str1[i] != '\0')
    {
        i++;
    }
    while(str2[j] != '\0')
    {
        j++;
    }
    printf("length of the 1st string :%d\n",i);
    printf("length of the 2nd string :%d\n",j);

    if(i == j)
    {
        printf("Both strings have same number of characters\n");
    }
    else
    {
        printf("Both strings does not have same number of characters\n");
    }
    
    if(i == j)
    {   
        for(int k=0; str1[k] !='\0'; k++)
        {
            for(int l=0; str2[l] !='\0'; l++)
            {
                if(str1[k] == str2[l])
                {
                    flag = 1;
                }
            }
        }
    }
    if(flag == 1)
    {
        printf("Both strings are anagram\n");
    }
    else
    {
        printf("Both strings are not anagram\n");
    }

}

int main()
{
    char str1[20],str2[20];
    int l;

    printf("Enter both the strings:");
    scanf("%s%s",str1,str2);

    anagram(str1,str2);
    return 0;
}