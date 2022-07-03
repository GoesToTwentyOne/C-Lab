#include<stdio.h>
int main()
{

    int i, total_animal = 0, animal_number;
    char animal;
    for (i = 0; i < 4; i++)
    {
        scanf("%d",&animal_number);
        scanf("%c", animal);
        printf("i = %d\tanimal number = %d\t animal = %c\n\n",i,animal_number,animal);
    }
    return 0;
}
