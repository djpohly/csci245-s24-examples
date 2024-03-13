#include <stdio.h>

int arr[10];

int *new_arr(int size)
{
	for (int i = 0; i < size; i++) {
		arr[i] = i * i;
	}
	return arr;
}

int main(void)
{
	int *arr = new_arr(10);
	int *arr2 = new_arr(10);

	for (int i = 0; i < 10; i++) {
		arr2[i] = 0;
	}

	for (int i = 0; i < 10; i++) {
		printf("%d ", arr[i]);
	}
	printf("\n");

	return 0;
}
