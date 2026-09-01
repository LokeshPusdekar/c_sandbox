#include<stdio.h>

int main()
{
    int num=1234,sum=0,temp;
    while (num > 0)
    {   
        temp = num % 10;
        sum =  sum + temp;
        num = num / 10;   
    }
    printf("\n%d",sum);
    
    return 0;
}