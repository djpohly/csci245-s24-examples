#include <stdio.h>

struct listnode {
	double x;
	struct listnode next;
};

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
