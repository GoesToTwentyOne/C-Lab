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
    printf("%d %d",num1,num2);
  for(int i=2;i<n;i++){
    fibo=num1+num2;
    printf(" %d ",fibo);
    num1=num2;
    num2=fibo;
  }
}
