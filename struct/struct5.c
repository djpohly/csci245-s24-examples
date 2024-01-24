#include <stdio.h>

struct point {
	double x;
	double y;
};

void print_point(struct point p)
{
	printf("(%f, %f)\n",
			p.x,
			p.y);
}

struct point swap_xy(struct point p)
{
	double temp = p.x;
	p.x = p.y;
	p.y = temp;
	printf("inside: ");
	print_point(p);
	return p;
}

int main(void)
{
	struct point p;
	p.x = 3.0;
	p.y = -1.5;

	printf("before: ");
	print_point(p);

	p = swap_xy(p);

	printf("after: ");
	print_point(p);

	return 0;
}
