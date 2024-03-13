#include <stdio.h>

int *new_arr(int size)
{
	int arr[size];
	for (int i = 0; i < size; i++) {
		arr[i] = i * i;
	}
	return arr;
}

int main(void)
{
	int *arr = new_arr(10);

	for (int i = 0; i < 10; i++) {
		printf("%d ", arr[i]);
	}
	printf("\n");

	return 0;
}
