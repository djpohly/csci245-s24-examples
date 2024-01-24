#include <stdio.h>
#include <string.h>

enum id_type {
	ID,
	NAME,
	WEIRD,
};

union ident {
	int idnum;
	char name[10];
	double weird_idnum;
};

struct person {
	enum id_type which_id;
	union ident id;
};

int main(void)
{
	struct person julie;


	julie.which_id = WEIRD;
	julie.id.weird_idnum = 3.141592;

	julie.which_id = NAME;
	strcpy(julie.id.name, "Julie");

	julie.which_id = ID;
	julie.id.idnum = 122345;

	if (julie.which_id == ID) {
		printf("%d\n", julie.id.idnum);
	} else if (julie.which_id == NAME) {
		printf("%s\n", julie.id.name);
	} else if (julie.which_id == WEIRD) {
		printf("%f\n", julie.id.weird_idnum);
	} else {
		printf("i dunno\n");
	}

	return 0;
}
