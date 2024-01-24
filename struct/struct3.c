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

int main(void)
{
	struct point p;
	p.x = 3.0;
	p.y = -1.5;

	print_point(p);

	struct point q;
	q = p;

	print_point(q);

	p.x = 10.1;

	print_point(q);

	return 0;
}
