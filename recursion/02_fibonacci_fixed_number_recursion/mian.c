#include<stdio.h>
int fib(int n);
int main ()
{
  int n;
  printf("Enter a positive integer number: ");
  scanf("%d",&n);
  printf("%d", fib(n));
  return 0;
}
int fib(int n)
{
   if (n <= 1){
       return n;
   }
  return fib(n-1) + fib(n-2);
}
