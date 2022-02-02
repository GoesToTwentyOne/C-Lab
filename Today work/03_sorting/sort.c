#include<stdio.h>
int main()
{
  int temp;
  int arr[5]={6,8,32,25,8};
  printf("Before sorting the array \n" );
  for(int i=0;i<5;i++){
    printf("%d  ", arr[i]);
}
  for(int i=0;i<5;i++){
    for(int j=i+1;j<5;j++){
      if (arr[i]>arr[j]){
        temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
      }
    }
  }
  printf("\nAfter sorting the array \n" );
  for(int i=0;i<5;i++){
    printf("%d  ", arr[i]);
}

}
