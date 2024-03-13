#include <stdio.h>
#include <stdlib.h>

int *new_arr(int len)
{
	int *arr = malloc(sizeof(int) * len);
	for (int i = 0; i < len; i++) {
		arr[i] = i * i;
	}

	return arr;
}

int main(void)
{
	int *arr;
	int *arr2;

	// Memory leak - allocate but don't/can't free
	for (int i = 0; i < 1000000000; i++) {
		arr = new_arr(100);
		arr2 = new_arr(10);

		for (int i = 0; i < 10; i++) {
			arr2[i] = 0;
		}
	}

	for (int i = 0; i < 100; i++) {
		printf("%d ", arr[i]);
	}
	printf("\n");
	for (int i = 0; i < 10; i++) {
		printf("%d ", arr2[i]);
	}
	printf("\n");

	return 0;
}
