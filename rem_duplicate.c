#include<stdio.h>

void mystrdup(int *num, int n)
{
    for (int i = 0; i < n; i++)
    {
          
        for (int j = i+1; j < n; j++)
        {
            if (num[i] == num[j])
            {
                num[j] = '@';
            }
            
        }
        
    }
    printf("Array without duplicate values:");
    for (int i = 0; i < n; i++)
    {   
        if (num[i] != '@')
        {
            printf("%d,",num[i]);
        }    
    }
    
}

int main()
{
    int num[20],n,i=0;

    printf("Enter the size of Array:");
    scanf("%d",&n);

    printf("Enter the element of Array:");
    while (i < n)
    {
        scanf("%d",&num[i]);
        i++;
    }

    mystrdup(num, n);

    return 0;

}