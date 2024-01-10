#include <stdio.h>

long factorial(int n) {
	if (n == 0)
		return 1;
	return n * factorial(n - 1);
}

int main(void)
{
	printf("%ld\n", factorial(10));
	return 0;
}
