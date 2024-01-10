#include <stdio.h>

int main(void)
{
	// char[] name = new char[10];
	char name[10];

	printf("What's your name? ");
	scanf("%s", name);

	printf("Hello, %s!\n", name);
	// printf(format string, ...)

	name[0] = 'B';
	name[1] = 'o';
	name[2] = 'b';
	name[3] = '\0';
	name[-10] = 'e';

	printf("Hello also, %s!\n", name);

	return 0;
}
