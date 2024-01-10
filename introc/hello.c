#include <stdio.h>

int main(void)
{
	// char[] name = new char[10];
	char name[10];

	name[0] = 'J';
	name[1] = 'o';
	name[2] = 'r';
	name[3] = 'g';
	name[4] = 'e';
	name[5] = '\0';

	printf("Hello, %s!\n", name);
	// printf(format string, ...)

	name[0] = 'B';
	name[1] = 'o';
	name[2] = 'b';
	name[3] = '\0';
	name[4] = 'e';

	printf("Hello also, %s!\n", name);

	return 0;
}
