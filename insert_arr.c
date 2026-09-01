//Inserting elements in array

#include<stdio.h>

void store_array(int* arry,int size)
{
    for (int i = 0; i <= size; i++)
    {
        printf("\nEnter the %dst value =",i);
        scanf("%d",&arry[i]);
    }
    for (int i = 0; i <= 5; i++)
    {
        printf("%d",arry[i]);
    }    
}
int main()
{
    int* num0[3],num1[4],num2[5];
    store_array(&num0[0], 3);
    store_array(&num1[0], 4);
    store_array(&num2[0], 5);

    return 0;
}