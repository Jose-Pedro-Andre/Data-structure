#include "stack.h"

void push(void *data, Stack_t **my_stack)
{
	if (!(*my_stack))
	{
		*my_stack =  malloc(sizeof(Stack_t));
		if (!(*my_stack))
			exit(EXIT_FAILURE);
		(*my_stack)->value = data;
		(*my_stack)->next = NULL;
		return ;
	}
	Stack_t *new_head = malloc(sizeof(Stack_t));
	if (!new_head)
		exit(EXIT_FAILURE);
	new_head->value = data;
	new_head->next = *my_stack;
	*my_stack = new_head;
	return ;
}
void pop(Stack_t **my_stack)
{
	if (!(*my_stack))
		return ;
	Stack_t *new = *my_stack;
	(*my_stack) = (*my_stack)->next;
	free(new);
	return ;
}
void *peek(Stack_t *my_stack)
{
	if (!my_stack)
		return NULL;
	return (my_stack->value);
}
bool is_full(Stack_t *my_stack)
{
	return !my_stack ? false : true;
}
bool is_empty(Stack_t *my_stack)
{
	return !my_stack ? true : false;
}

void print_stack(Stack_t *my_stack)
{
	for(; my_stack; my_stack = my_stack->next)
	{
		int n = *(int *)my_stack->value;
		printf("%d\n", n);
	}
}
int main(int ac, char **av)
{
	Stack_t *my_stack = NULL;

	if (ac < 2)
	{
		printf("Invalid arguments: require at leat two argumens\n");
		return 1;
	}
	for(int i = 1; i < ac; i++)
	{
		int value = atoi(av[i]);
		push(&value, &my_stack);
	}
	print_stack(my_stack);
	while(my_stack)
	{
		/*
		int *head = peek(my_stack);
		if (head)
		{
			printf("%d\n", *head);
		}*/
		pop(&my_stack);
	}

	if (is_empty(my_stack))
		printf("the stack is empty\n");
	return 0;
}
