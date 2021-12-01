
#include<stdio.h>
int main()
{
    printf("Sum two numbers--------------\n");
    int a,b,sum;
    printf("Enter Number1:\n");
    scanf("%d", &a);
    printf("Enter Number2:\n");
    scanf("%d", &b);
    sum=a+b;
    int temp =a;
    a=b;
    b=temp;

    printf("%d + %d = %d",a,b,sum);
    return 0;
}
