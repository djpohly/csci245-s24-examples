#include <stdio.h>
#include <string.h>

union ident {
	int idnum;
	char name[10];
	double weird_idnum;
};

struct person {
	int which_id;
	union ident id;
};

int main(void)
{
	struct person julie;

	julie.which_id = 0;
	julie.id.idnum = 122345;

	julie.which_id = 2;
	julie.id.weird_idnum = 3.141592;

	julie.which_id = 1;
	strcpy(julie.id.name, "Julie");

	if (julie.which_id == 0) {
		printf("%d\n", julie.id.idnum);
	} else if (julie.which_id == 1) {
		printf("%s\n", julie.id.name);
	} else if (julie.which_id == 2) {
		printf("%f\n", julie.id.weird_idnum);
	} else {
		printf("i dunno\n");
	}

	return 0;
}
