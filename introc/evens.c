#include <stdio.h>

#include "printarray.h"

void evens(int arr[], int n) {
	for (int i = 0; i < n; i++) {
		arr[i] = 2 * i;
	}
}

int main(void)
{
	int arr[12];

	print_array(12, arr);
	evens(arr, 12);
	print_array(12, arr);

	return 0;
}
