#include <stdio.h>

int main(void)
{
	long x = 5;
	long y = 111;

	printf("%lu\n", x);
	printf("%lu\n", y);
	int a = &x;
	printf("%lu\n", a);
	printf("%lu\n", &y);
	// address-of operator

	printf("%lu\n", sizeof(long));
	printf("%lu\n", sizeof(long));

	printf("%lu\n", &main);
	printf("%lu\n", &printf);

	return 0;
}
