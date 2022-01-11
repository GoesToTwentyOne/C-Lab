#include <stdio.h>
#include <string.h>
int main() {
   char f_name[50] = "Md.Nihad ";
  char l_name[50] = "Hossain";
  //concatenation
   printf("%s\n",f_name );
   strcat(f_name, l_name);
   printf("%s\n",f_name );
   //find string length
   printf("%d\n",strlen(f_name) );
   printf("%d\n",strlen(l_name) );
   //string copy
   printf("%s\n",f_name );
   printf("%s\n",strcpy(f_name,l_name) );
   return 0;
}
