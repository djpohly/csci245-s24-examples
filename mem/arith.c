#include <stdio.h>

int main(void)
{
	long a = 10;
	long b = 20;
	//int *x = &a;
	long *p;
	p = &a;

	// Pointer arithmetic
	printf("p = %lu\n", p);
	printf("p - 1 = %lu\n", p + 10);

	return 0;
}
