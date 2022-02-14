#include<stdio.h>
int fibonacci(int n);
int main(){
  int n;
  printf("Enter a positive integer number: ");
  scanf("%d",&n);
  printf("Fibbonacci of %d is : " , n);
  fibonacci(n);
}
int fibonacci(int n){
  int num1=0,num2=1,fibo=0;
  for(int i=0;i<n;i++){
    if(i<=1){
      fibo=i;
    }
    else{
      fibo=num1+num2;
      num1=num2;
      num2=fibo;
    }
    printf(" %d ",fibo );
  }
}
