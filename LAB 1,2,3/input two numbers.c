
#include <stdio.h>
int main()
{
    printf("Enter operation +,-,*,/ to press 1,2,3,4 \n");
    int a,b,sum,operation;
    scanf("%d",&operation);

    //summation
    if (operation ==1 ){
    printf("Sum two numbers--------------\n");
    printf("Enter Number1:\n");
    scanf("%d", &a);
    printf("Enter Number2:\n");
    scanf("%d", &b);
    sum=a+b;
    printf("Result :%d",sum);

    }
       else if (operation==2){
    printf("Subtraction two numbers--------------\n");
    printf("Enter Number1:\n");
    scanf("%d", &a);
    printf("Enter Number2:\n");
    scanf("%d", &b);
    sum=a-b;
    printf("Result :%d",sum);

    }
    else if (operation==3){
    printf("Multiplication two numbers--------------\n");
    printf("Enter Number1:\n");
    scanf("%d", &a);
    printf("Enter Number2:\n");
    scanf("%d", &b);
    sum=a*b;
    printf("Result :%d",sum);

    }
    else if (operation==4){
    printf("Divition two numbers--------------\n");
    printf("Enter Number1:\n");
    scanf("%d", &a);
    printf("Enter Number2:\n");
    scanf("%d", &b);
    sum=a/b;
    printf("Result :%d",sum);

    }
    else{
        printf("Your operation is not available");
    }

    return 0;

}
