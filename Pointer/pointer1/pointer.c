#include<stdio.h>
void  pointerdril(int *c);

int main()
{
  //value assign
	int a = 10;
  int *b=0; //pointer declare
	//print normal variable =>accessing
  printf("%d\n",a );
	//print normal variable memory address
	printf("memory address a : %x\n", &a);
	//print pointer variable default it's hold nil
  printf("%d\n", b);
	//memory address b
  printf("memory address b :%x\n", &b);
	//referencing address of a
	b = &a;
	//print b reference address
  printf("after referencing :%x\n", b);
	//b dereferencing and print value
	printf("after dereferencing and print value :%d\n", *b);
	//function value
	pointerdril(&a);
  //after pass the address and print the value
  printf("after pass the address in the function : %d\n",a );
}
void  pointerdril(int *c) {
	printf("%x\n",c);
	//before reassign and dereferencing
	printf("before reassign and dereferencing : %d\n", *c);
	*c = *c + 20;
	printf("%x\n",c);
	printf("after reassign and dereferencing %d\n", *c);
}
