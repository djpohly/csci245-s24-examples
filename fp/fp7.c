#include <stdio.h>
#include <stdlib.h>
#include <time.h>

struct animal {
	char *name;
	void (*noise)(struct animal *, int);
};

struct bird {
	struct animal super;
	double wingspan;
};

struct dog {
	struct animal super;
	int tagNum;
};

void dog_noise(struct animal *super, int times) {
	struct dog *this = (struct dog *) super;
	for (int i = 0; i < times; i++) {
		printf("Woof! My name is %s, tag %d!\n", this->super.name, this->tagNum);
	}
}

void bird_noise(struct animal *this, int times) {
	printf("Tweet (now known as X)\n");
}

void animal_noise(struct animal *aminal, int times) {
	aminal->noise(aminal, times);
}

int main(void)
{
	struct dog fido;
	fido.super.name = "Fido";
	fido.super.noise = dog_noise;
	fido.tagNum = 12345;

	animal_noise(&fido.super, 3);

	struct bird tweety;
	tweety.super.name = "Tweety";
	tweety.super.noise = bird_noise;
	tweety.wingspan = 3.14;

	animal_noise(&tweety.super, 2);

	return 0;
}
