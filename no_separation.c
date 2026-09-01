#include<stdio.h>

int main()
{
    int num=12345,r1,r2,r3,r4,q1,q2,q3,q4,add;

    r1 = num % 10; // 5
    num = num / 10;  // 1234
    r2 = num % 10;    // 4
    num = num / 10;  // 123
    r3 = num % 10;    // 3
    num = num / 10;  // 12
    r4 = num % 10;    // 2
    num = num /10;    //1

    add = r1+r2+r3+r4+q4;
    printf("%d",add);
    return 0;
}