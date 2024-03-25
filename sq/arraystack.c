#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

// Pointer to our dynamically allocated memory
int *arr;
// Number of items currently on the stack
int size;
// Number of items we can store without reallocating
int capacity;

void grow() {
	capacity *= 2;
	arr = realloc(arr, sizeof(int) * capacity);
}

void as_push(int item) {
	assert(size <= capacity);
	if (size == capacity) {
		grow();
	}
	arr[size] = item;
	size++;
}

// don't call this on an empty stack pls
int as_peek(void) {
	return arr[size - 1];
}

// don't call this on an empty stack pls
int as_pop(void) {
	size--;
	return arr[size];
}

int main(void) {
	capacity = 8;
	arr = malloc(sizeof(int) * capacity);
	size = 0;

	// 5 4 3 7 6 6 2 1
	as_push(1);
	as_push(2);
	as_push(3);
	as_push(4);
	as_push(5);
	printf("%d\n", as_pop());
	printf("%d\n", as_pop());
	printf("%d\n", as_pop());
	as_push(6);
	as_push(7);
	printf("%d\n", as_pop());
	printf("%d\n", as_peek());
	printf("%d\n", as_pop());
	printf("%d\n", as_pop());
	printf("%d\n", as_pop());
	as_push(1);
	as_push(2);
	as_push(3);
	as_push(4);
	as_push(5);
	as_push(1);
	as_push(2);
	as_push(3);
	as_push(4);
	as_push(5);
	as_push(1);
	as_push(2);
	as_push(3);
	as_push(4);
	as_push(5);
	as_push(1);
	as_push(2);
	as_push(3);
	as_push(4);
	as_push(5);

	free(arr);

	return 0;
}
