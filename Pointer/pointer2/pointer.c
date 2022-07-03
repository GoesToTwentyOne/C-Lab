#include<stdio.h>
void goes(int *z);
void main() {
//	memory address of another variable
// ** hexadecimal



//	Why use pointer?
//You don’t want to pass around a lot of data(Handle big data).
//You want to change the data at a location.

	int y = 1;
  printf("before pass the address value is : %d \n", y);
  printf("before pass the address address is:  %x \n", &y);
	goes(&y);
	printf("\nafter pass the address,in goes func value is: %d\n", y);
	printf("after pass the address in goes func address is: %x\n", &y);

}

void goes(int *z) {
	printf("\nbefore dereferencing in goes func address is: %x\n", z);
	printf("before dereferencing in  goes func value is : %d \n", *z);
  *z = 73;
	printf("\nafter dereferencing in goes func address is: %x\n", z);
	printf("after dereferencing in goes func value is: %d\n", *z);

}
