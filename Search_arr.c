//search the element in array

#include<stdio.h>
#include<stdbool.h>

int main()
{
    int flag,x,num[5]= {10,20,30,40,50};

    printf("Enter the element you want to search =");
    scanf("%d",&x);

    // for (int i = 0; i < 5; i++)
    // {
    //     printf("Enter the %dst value = ",i);
    //     scanf("%d",&num[i]);
    // }
    
    for (int i = 0; i < 5; i++)
    {
        if (num[i] == x)
        {   
            flag = 1;
        }
        
    }
    if (flag == 1)
    {
        printf("Match is found ");
    }
    else {printf("Match is not found ");}

    
    return 0;
}