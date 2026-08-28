#include<stdio.h>

// To check the given integer is a prime number or not.

void prime_no(int n)
{   
    int flag = 0;
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            flag = 1;
            break;
        }
        
    }
    if (flag == 0)
    {
        printf("%d is  prime number. ",n);
    }
    else
    {
        printf("%d is not a prime number",n);
    }
    
}

int main()
{
    int num;

    printf("Enter an Integer(Exceptions are 1 & 2):");
    scanf("%d",&num);

    prime_no(num);

    return 0;
}