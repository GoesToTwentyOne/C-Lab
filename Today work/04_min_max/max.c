#include <stdio.h>
//max func
int max(int arr[])
{
    printf("Elements of array are : ");
    for(int i=0;i<5;i++)
    {
        printf("%d ", arr[i]);
    }
    int max=arr[0];
    for(int i=0;i<5;i++)
    {
      if(max<arr[i]){
        max=arr[i];
      }
    }
    return max;
}
//min func
int min(int arr[])
{
    printf("Elements of array are : ");
    for(int i=0;i<5;i++)
    {
        printf("%d ", arr[i]);
    }
    int min=arr[0];
    for(int i=0;i<5;i++)
    {
      if(min>arr[i]){
        min=arr[i];
      }
    }
    return min;
}

int main()
{
   int arr[5]={45,67,34,78,90};
   printf("\n Maximum result is : %d\n", max(arr) );
   printf("\n Minimum result is : %d\n", min(arr) );
   return 0;
}
