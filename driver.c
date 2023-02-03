/* Owen Danke
2/3/2023
Driver for stack
*/
#include <stdio.h>
#include "stack.h"

int main(){
	struct node *stack;
	stack = (struct node *) malloc(sizeof(struct node));
	char c;
	init(stack);
	
	push(stack, 5);
	push(stack, 3);
	
	printf("Size of stack is: %d\n", size(stack));
	printf("Top of stack is: %d\n", top(stack));
	printf("Top of stack is: %d\n", top(stack));
	printf("Size of stack is now: %d\n", size(stack));

	return 0;
}