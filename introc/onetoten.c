#include <stdio.h>

long factorial(int n) {
	long product = 1;
	for (int i = 1; i <= n; i++) {
		product *= i;
	}
	return product;
}

int main(void)
{
	printf("%ld\n", factorial(5));
	return 0;
}
