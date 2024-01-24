#include <stdio.h>

struct point {
	double x;
	double y;
};

struct point the_origin() {
	struct point o;
	o.x = 0;
	o.y = 0;
	return o;
}

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

	p = the_origin();

	print_point(p);

	return 0;
}
