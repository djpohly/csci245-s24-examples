#include <stdio.h>

void swap(int *x, int *y) {
	int t = *x;
	*x = *y;
	*y = t;
}

int divide_10_by(int divisor, int *result) {
	if (divisor == 0)
		return 1;

	// somehow also return 10 / divisor;
	*result = 10 / divisor;
	return 0;
}

int main(void)
{
	// Arrays
	int arr[10];
	int *sub_arr = arr + 3;

	// Aliasing
	int x = 10, y = 5;
	int *px = &x;
	for (int i = 0; i < 2; i++) {
		*px = 20;
		px = &y;
	}

	// Passing by reference
	int a = 5;
	int b = 8;
	swap(&a, &b);
	printf("%d %d\n", a, b);

	// Output parameters
	int result;
	if (divide_10_by(0, &result)) {
		printf("failed\n");
	} else {
		printf("%d\n", result);
	}

	scanf("%d", &x);

	return 0;
}
