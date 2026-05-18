#include "stack.h"

int main(int ac, char **av)
{
	Stack_t *head = NULL;

	if (ac < 2)
	{
		printf("Invalid arguments: require at leat two argumens\n");
		return 1;
	}
	for(int i = 1; i < ac; i++)
	{
		int value = atoi(av[i]);
		push(value, &head);
	}
	print_stack(head);
	while(head)
	{
		/*
		int *head = peek(head);
		if (head)
		{
			printf("%d\n", *head);
		}*/
		pop(&head);
	}

	if (is_empty(head))
		printf("the stack is empty\n");
	return 0;
}