#include <stdio.h>

struct point {
	double x;
	double y;
};

int g = 10;

void print_point(struct point *p)
{
	printf("(%f, %f)\n",
			p->x,
			p->y);
}

void swap_xy(struct point *p)
{
	double temp = p->x;
	p->x = p->y;
	p->y = temp;
	printf("inside: ");
	print_point(p);
}

int main(void)
{
	struct point p;
	p.x = 3.0;
	p.y = -1.5;

	printf("before: ");
	print_point(&p);

	swap_xy(&p);

	printf("after: ");
	print_point(&p);

	return 0;
}
