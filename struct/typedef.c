#include <stdio.h>

struct point {
	double x;
	double y;
};
typedef struct point point;

void print_point(point p)
{
	printf("(%f, %f)\n",
			p.x,
			p.y);
}


int main(void)
{
	point p;
	p.x = 3;
	p.y = -1.5;

	print_point(p);

	return 0;
}
