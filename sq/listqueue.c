#include <stdio.h>
#include <stdlib.h>

struct node {
	int datum;
	struct node *next;
};

struct node *head = NULL;
struct node *tail = NULL;

void lq_enqueue(int item) {
	// Java: tail = tail.next = new Node(item, null);
	struct node *newNode = malloc(sizeof(*newNode));
	newNode->datum = item;
	newNode->next = NULL;

	if (head == NULL) {
		head = newNode;
	} else {
		// we know tail != NULL iff head != NULL
		tail->next = newNode;
	}
	tail = newNode;
}

// don't call this on an empty queue pls
int lq_peek(void) {
	return head->datum;
}

// don't call this on an empty queue pls
int lq_dequeue(void) {
	struct node *previousHead = head;
	int toReturn = head->datum;

	head = head->next;
	free(previousHead);
	if (head == NULL) {
		tail = NULL;
	}

	return toReturn;
}

int main(void) {
	// set up queue

	// 1 2 3 4 5 5 6 7
	lq_enqueue(1);
	lq_enqueue(2);
	lq_enqueue(3);
	lq_enqueue(4);
	printf("%d\n", lq_dequeue());
	printf("%d\n", lq_dequeue());
	lq_enqueue(5);
	printf("%d\n", lq_dequeue());
	lq_enqueue(6);
	lq_enqueue(7);
	printf("%d\n", lq_dequeue());
	printf("%d\n", lq_peek());
	printf("%d\n", lq_dequeue());
	printf("%d\n", lq_dequeue());
	printf("%d\n", lq_dequeue());

	return 0;
}
