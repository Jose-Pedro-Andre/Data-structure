#include "stack.h"

void push(int data, Stack_t **head)
{
	if (!(*head))
	{
		*head =  malloc(sizeof(Stack_t));
		if (!(*head))
			exit(EXIT_FAILURE);
		(*head)->value = data;
		(*head)->next = NULL;
		return ;
	}
	Stack_t *new_head = malloc(sizeof(Stack_t));
	if (!new_head)
		exit(EXIT_FAILURE);
	new_head->value = data;
	new_head->next = *head;
	*head = new_head;
	return ;
}
void pop(Stack_t **head)
{
	if (!(*head))
		return ;
	Stack_t *new = *head;
	(*head) = (*head)->next;
	free(new);
	return ;
}
int peek(Stack_t *head)
{
	if (!head)
		return 0;
	return (head->value);
}
bool is_full(Stack_t *head)
{
	return !head ? false : true;
}
bool is_empty(Stack_t *head)
{
	return !head ? true : false;
}

void print_stack(Stack_t *head)
{
	for(; head; head = head->next)
	{
		int n = head->value;
		printf("%d\n", n);
	}
}


void destroy_stack(Stack_t *head)
{
	while(head)
	{
		Stack_t *tmp;
		tmp = head;
		head = head->next;
		free(tmp);
	}
}

