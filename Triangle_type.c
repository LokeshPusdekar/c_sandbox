#include<stdio.h>
int main()
{
    int s1,s2,s3;
    printf("Enter value for A, B, C : ");
    scanf("%d%d%d",&s1,&s2,&s3);

    if (s1 == s2 && s1 == s3 )
    {
        printf("Equilateral Triangle ");
    }
    else
    {
        if (s2 == s3 || s1 == s2 || s3 == s2)
        {
            printf("The triangle is Isoscale triangle");
        }
        else
        {
            printf("The Triangle is Scalen Triangle ");
 
    }
    return 0;
}