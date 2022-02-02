#include<stdio.h>
int main()
{
  int arr[100];
  int num,i;
  printf("Enter your limit  :");
  scanf("%d", &num);
  for(i=0;i<num;i++){
    printf("arr[%d] : ",i+1);
    scanf("%d",&arr[i] );

  }
    printf("Input array is :");
  for(i=0;i<num;i++){

    printf(" %d \t",arr[i] );

  }


}
