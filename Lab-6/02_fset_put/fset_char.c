#include <stdio.h>
int main()
{
    char with_space_name[40];
    printf("Enter Your name: ");
    fgets(with_space_name, sizeof(with_space_name), stdin);  // read string using fgets
    printf("Name: ");
    puts(with_space_name);    // print string
    return 0;
}
