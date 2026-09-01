#include<stdio.h>
#include<math.h>

int swap(int x, int y)
{
    int temp = x;
    x = y;
    y = temp;
    //printf("vaue of x=%d , value of y=%d",x,y);
    return x,y;
}

int main()
{
    int x,y,z;
    printf("Enter value for X and Y repectively: ");
    scanf("%d%d",&x,&y);

    z = swap(x,y);
    printf("value of X = %d",z);
    return 0;
    
}