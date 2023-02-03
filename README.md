# simpleStack
My implementation of a stack for integers, it is used in my rpn calculator.

The only setup need is to create a stack node,
```
  struct node* stack;
	stack = (struct node *) malloc(sizeof(struct node));
  init(struct node*)
```
Then you may use push() and top() to interact with the stack.

## Defintions:
* init(struct node*)
    Initializes the pointers for the stack to the dummy node. This dummy node also holds the number of elements in the stack, and can be accessed using the size() function.
    
* size(struct node*)
    Returns the number of elements currently in the stack.

* push(struct node*, int val)
    Pushes the passed integer value to the top of the stack.
    
* top(struct node*)
    Returns the top element in the stack and deletes it, the element after it is now the new top.
