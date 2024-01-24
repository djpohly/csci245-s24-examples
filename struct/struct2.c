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

	struct point q;
	q = p;

	printf("(%f, %f)\n",
			q.x,
			q.y);

	p.x = 10.1;

	printf("(%f, %f)\n",
			q.x,
			q.y);

	return 0;
}
