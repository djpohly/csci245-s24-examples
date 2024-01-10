#include <stdio.h>

int is_even(int n);

int is_odd(int n) {
	if (n == 0) {
		return 0; // false
	}
	return is_even(n - 1);
}

int is_even(int n) {
	if (n == 0) {
		return 1; // true
	}
	return is_odd(n - 1);
}

int main(void)
{
	printf("%d\n", is_odd(11));
	return 0;
}
