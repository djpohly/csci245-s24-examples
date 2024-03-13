#include <stdio.h>

void change_element_3(int *p) {
	p[3] = -10;
	printf("%u\n", sizeof(p));
}

int main(void)
{
	int arr[10];

	printf("%u\n", sizeof(arr));

	for (int i = 0; i < 10; i++) {
		arr[i] = i * i * i;
	}

	change_element_3(arr + 1);

	printf("%d\n", arr[2]);
	printf("%d\n", arr[3]);

	/* int *arr2 = arr + 3; */
	int *arr2 = &arr[3];
	arr2[1] = -20;
	printf("%d\n", arr[4]);

	return 0;
}
