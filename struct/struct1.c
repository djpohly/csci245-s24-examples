#include <stdio.h>

struct point {
	double x;
	double y;
};

int main(void)
{
	struct point p;
	p.x = 3.0;
	p.y = -1.5;

	printf("(%f, %f)\n",
			p.x,
			p.y);

	return 0;
}
