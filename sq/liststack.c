#include <stdio.h>
#include <stdlib.h>

struct node {
	int datum;
	struct node *next;
};

struct node *head = NULL;

void ls_push(int item) {
	// head = new Node(item, head);
	struct node *newNode = malloc(sizeof(struct node));
	newNode->next = head;
	newNode->datum = item;
	head = newNode;
}

// don't call this on an empty stack pls
int ls_peek(void) {
	return head->datum;
}

// don't call this on an empty stack pls
int ls_pop(void) {
	int toReturn = head->datum;
	struct node *newHead = head->next;
	free(head);
	head = newHead;
	return toReturn;
}

int main(void) {
	// set up stack

	// 5 4 3 7 6 6 2 1
	ls_push(1);
	ls_push(2);
	ls_push(3);
	ls_push(4);
	ls_push(5);
	printf("%d\n", ls_pop());
	printf("%d\n", ls_pop());
	printf("%d\n", ls_pop());
	ls_push(6);
	ls_push(7);
	printf("%d\n", ls_pop());
	printf("%d\n", ls_peek());
	printf("%d\n", ls_pop());
	printf("%d\n", ls_pop());
	printf("%d\n", ls_pop());
	ls_push(1);
	ls_push(2);
	ls_push(3);
	ls_push(4);
	ls_push(5);
	ls_push(1);
	ls_push(2);
	ls_push(3);
	ls_push(4);
	ls_push(5);
	ls_push(1);
	ls_push(2);
	ls_push(3);
	ls_push(4);
	ls_push(5);
	ls_push(1);
	ls_push(2);
	ls_push(3);
	ls_push(4);
	ls_push(5);


	return 0;
}
