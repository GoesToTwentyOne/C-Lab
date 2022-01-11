
#include <stdio.h>
int main()
{
    char without_space_name[50];
    printf("Enter  your name: ");
    scanf("%s", without_space_name);
    printf("Your name is %s.", without_space_name);
    return 0;
}
