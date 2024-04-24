#include <stdio.h>

int add1(int x) {
	return x + 1;
}

int times3(int x) {
	return x * 3;
}

int twice(int (*f)(int), int x) {
	return f(f(x));
}

int main(void)
{
	int (*arr[2])(int);

	arr[0] = add1;
	arr[1] = times3;

	for (int i = 0; i < 2; i++) {
		printf("hello world %ld\n", twice(arr[i], 10));
	}

	return 0;
}
