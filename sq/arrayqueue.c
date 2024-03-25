#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

// Pointer to our dynamically allocated memory
int *arr;
// Number of items currently on the stack
int head, size;
// Number of items we can store without reallocating
int capacity;

void grow() {
	capacity *= 2;
	arr = realloc(arr, sizeof(int) * capacity);
}

void aq_enqueue(int item) {
	if (size >= capacity) {
		grow();
	}
	arr[(head + size) % capacity] = item;
	size++;
}

// don't call this on an empty stack pls
int aq_peek(void) {
	return arr[head];
}

// don't call this on an empty stack pls
int aq_dequeue(void) {
	int toReturn = arr[head];
	//head = (head + 1) % capacity;
	head++;
	head %= capacity;
	size--;
	return toReturn;
}

int main(void) {
	capacity = 8;
	arr = malloc(sizeof(int) * capacity);
	size = 0;

	// 1 2 3 4 5 5 6 7
	aq_enqueue(1);
	aq_enqueue(2);
	aq_enqueue(3);
	aq_enqueue(4);
	printf("%d\n", aq_dequeue());
	printf("%d\n", aq_dequeue());
	aq_enqueue(5);
	printf("%d\n", aq_dequeue());
	aq_enqueue(6);
	aq_enqueue(7);
	printf("%d\n", aq_dequeue());
	printf("%d\n", aq_peek());
	printf("%d\n", aq_dequeue());
	printf("%d\n", aq_dequeue());
	printf("%d\n", aq_dequeue());

	free(arr);

	return 0;
}
