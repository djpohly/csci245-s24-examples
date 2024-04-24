#include <stdio.h>
#include <stdlib.h>

int add1(int x) {
	return x + 1;
}

int times3(int x) {
	return x * 3;
}

// pickafunction is
//   ->  (
//       a function
//       -> int i
//       that takes an int
//       )
//   <-  *
//       and returns a pointer to
//       (
//   ->  (
//       a function
//       -> int
//       that takes an int
//       )
//   <-  int
//       and returns an int
int (*pickafunction(int i))(int) {
	switch (i) {
		case 0:
			return add1;
		case 1:
			return times3;
		default:
			abort();
	}
}

typedef int (*IntIntFunction)(int);

IntIntFunction pickafunctionreverse(int i) {
	switch (i) {
		case 1:
			return add1;
		case 0:
			return times3;
		default:
			abort();
	}
}

int main(void)
{
	for (int i = 0; i < 2; i++) {
		int result = pickafunction(i)(10);
		printf("hello world %ld\n", result);
	}

	return 0;
}
