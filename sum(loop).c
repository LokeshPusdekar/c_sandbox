#include<stdio.h>

int main()
{
    // print 1 to 100
    // int count=100;
    // for ( int i = 1; i <= count; i++)
    // {
    //     printf("%d\n",i);
    // }

    // print even number from 1 to 100
    // int count = 100;
    // for (int i = 1; i <= count; i++)
    // {
    //     if (i % 2 == 0)
    //     {
    //         printf("%d is Even No.\n",i);
    //     }
        
    // }


    //find sum of 1 to 100;

    int sum =0,count=100;
    for (int i = 0; i <= count; i++)
    {
        sum = sum + i;
    }
    printf("The sum of 1 to 100 is %d", sum);

    return 0;
}