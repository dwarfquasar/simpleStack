/* Owen Danke
implementation of stack using linked list theory

member functions:
top() - returns the top value and removes it
push() - pushes a value to the top of the stack
size() - returns the size of the stack
*/

#include <stdio.h>
#include <stdlib.h>

struct node{
	int value;
	struct node *next;
};

void init(struct node *head){
/* create head node and point to self */
	head -> next = head;
	head -> value = 0;
}

int top(struct node *head){
	int val;
	struct node *topNode;
	
/* do the pointer shuffle */
	topNode = head -> next;
	val = topNode -> value;
	head -> next = topNode -> next;
	
	free(topNode);
	head -> value--;
	
	return val;
}

void push(struct node *head, int val){
	struct node *newNode;
	struct node *lastNode;
	
	newNode = (struct node *) malloc(sizeof(struct node));
	newNode -> value = val;
	
	lastNode = head -> next;
	newNode -> next = lastNode;
	
	head -> next = newNode;
	newNode -> next = lastNode;
	
	head -> value++;
}

int size(struct node *head){
/* get the element count from head */
	return head -> value;
}