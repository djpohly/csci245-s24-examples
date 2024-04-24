#include <stdio.h>

int add1(int x) {
	return x + 1;
}

int times3(int x) {
	return x * 3;
}

int main(void)
{
	printf("hello world\n");
	printf("hello world %ld\n", 2);
	printf("hello world %ld\n", add1);
	printf("hello world %ld\n", &add1);

	// Declare
	int (*f)(int);
	// Initialize
	f = add1;
	printf("hello world %ld\n", f(10));

	f = times3;
	printf("hello world %ld\n", f(10));

	return 0;
}
