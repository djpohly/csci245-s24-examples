#include <stdio.h>
#include <stdlib.h>

// This allocates memory that needs to be freed
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

	arr = new_arr(100);
	arr2 = arr;

	for (int i = 0; i < 10; i++) {
		arr2[i] = 0;
	}

	for (int i = 0; i < 100; i++) {
		printf("%d ", arr[i]);
	}
	printf("\n");
	for (int i = 0; i < 10; i++) {
		printf("%d ", arr2[i]);
	}
	printf("\n");

	free(arr);
	free(arr2);

	return 0;
}
