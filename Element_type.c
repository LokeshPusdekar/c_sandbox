#include<stdio.h>
int main()
{
    char ch;
    printf("Enter any value , character, symbol : ");
    scanf("%c",&ch);

    if (ch>='a' && ch<='z')
    {
        printf("lowercase");
    }
    else
    {
        if (ch>='A' && ch<='Z')
        {
            printf("Uppercase");
        }
        else
        {
            if (ch>='0' && ch<='9')
            {
                printf("Digit");
            }
            else
            {
                printf("Its a Special Symbol");
            }
        }
    }
    return 0;
}