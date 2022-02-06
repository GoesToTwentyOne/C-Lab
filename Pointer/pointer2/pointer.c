#include<stdio.h>
void goes(int *z);
void main() {
	int y = 1;
  printf("before pass the address value is : %d \n", y);
  printf("before pass the address address is:  %x \n", &y);
	goes(&y);
	printf("after pass the address,in goes func value is: %d\n", y);
	printf("after pass the address in goes func address is: %x\n", &y);

}
void goes(int *z) {
	printf("before dereferencing in goes func address is: %x\n", z);
	printf("before dereferencing in  goes func value is : %d \n", *z);
  *z = 73;
	printf("after dereferencing in goes func address is: %x\n", z);
	printf("after dereferencing in goes func value is: %d\n", *z);

}
