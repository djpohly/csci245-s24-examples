#include <stdio.h>

int main(void)
{
	long x = 5;
	long y = 111;

	printf("%lu\n", x);
	printf("%lu\n", y);

	// Pointer to long
	long *a = &x;
	// Pointer to pointer to long
	long **b = &a;
	printf("%lu\n", a);
	printf("%lu\n", b);

	printf("%lu\n", *a);

	*a = 3;
	printf("%lu\n", x);

	return 0;
}
