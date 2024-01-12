#include <stdio.h>

#include "printarray.h"

void count(int arr[], int n) {
	for (int i = 0; i < n; i++) {
		arr[i] = i;
	}
}

int main(void)
{
	int arr[12];

	count(arr, 12);
	print_array(12, arr);

	return 0;
}
