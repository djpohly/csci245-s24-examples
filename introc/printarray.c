#include <stdio.h>

#include "printarray.h"

void print_array(int n, int arr[])
{
	printf("[");
	for (int i = 0; i < n; i++) {
		if (i != 0) {
			printf(", ");
		}
		printf("%d", arr[i]);
	}
	printf("]\n");
}
