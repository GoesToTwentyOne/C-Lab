#include <stdio.h>
#include <string.h>
struct student{
   int id;
   char name[30];
   float CGPA;
   char expertise[20];
};
int main(){
   int i;
   struct student record[5];
   // 1st student's record
   record[0].id=1;
   strcpy(record[0].name, "Md. Nihad Hossain");
   record[0].CGPA = 3.79;
   strcpy(record[0].expertise,"Google's Golang");
   // 2nd student's record
   record[1].id=2;
   strcpy(record[1].name, "Priya");
   record[1].CGPA = 3.5;
   strcpy(record[1].expertise,"C");
   // 3rd student's record
   record[2].id=3;
   strcpy(record[2].name, "Hari");
   record[2].CGPA = 3.85;
   strcpy(record[2].expertise,"Devops");
   for(i=0; i<3; i++){
      printf(" Records of STUDENT : %d \n", i+1);
      printf(" Id is: %d \n", record[i].id);
      printf(" Name is: %s \n", record[i].name);
      printf(" CGPA is: %.2f\n",record[i].CGPA);
      printf(" Expertise field is: %s\n\n",record[i].expertise);
   }
   return 0;
}
