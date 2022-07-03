#include <stdio.h>
#include <stdlib.h>

int main()
{
   int num;
   FILE *fptr;
   char sen[50];

   // use appropriate location if you are using MacOS or Linux
   fptr = fopen("num.txt","w");

   if(fptr == NULL)
   {
      printf("Error!");
      exit(1);
   }

   printf("Enter name: ");
   scanf("%s",&sen);

   fprintf(fptr,"%s",sen);
   fclose(fptr);

  printf("Data successfully write the file num.txt\n");
  printf("The file is now closed.") ;
 }
