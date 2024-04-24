#include <stdio.h>

int add1(int x) {
	return x + 1;
}

int main(void)
{
	printf("hello world\n");
	printf("hello world %ld\n", 2);
	printf("hello world %ld\n", add1);
	printf("hello world %ld\n", &add1);

	int (*f)(int);
	f = add1;
	printf("hello world %ld\n", f);
	printf("hello world %ld\n", &f);

	return 0;
}
