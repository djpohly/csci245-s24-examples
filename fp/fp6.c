#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int forward(int a, int b) {
	return a - b;
}

int backward(int a, int b) {
	return b - a;
}

void selectionSort(int array[], int n, int (*compare)(int, int))
{
	int i, j;
	for (i = 0; i < n; i++)     
	{
		int min = array[i];
		int minPos = i;
		for (j = i + 1; j < n; j++) 
		{
			if (compare(min, array[j]) > 0)
			{
				min = array[j];
				minPos = j;
			}
		}
		array[minPos] = array[i];
		array[i] = min;
	}
}

int main(void)
{
	srand(time(NULL));
	int arr[10];
	for (int i = 0; i < 10; i++) {
		arr[i] = rand() % 100;
	}

	for (int i = 0; i < 10; i++) {
		printf("%d ", arr[i]);
	}
	printf("\n");

	selectionSort(arr, 10, backward);

	for (int i = 0; i < 10; i++) {
		printf("%d ", arr[i]);
	}
	printf("\n");

	return 0;
}
