#include "stack.h"

void v_push(void *data, v_stack_t **head)
{
	if (!(*head))
    {
        *head = malloc(sizeof(v_stack_t));
        (*head)->data = data;
        (*head)->next = NULL;
        return ;
    }
    v_stack_t *new_head = malloc(sizeof(v_stack_t));
    if (!new_head)
        exit(EXIT_FAILURE);
    new_head->data = data;
    new_head->next = (*head);
    (*head) = new_head;
}

void v_pop(v_stack_t **head)
{
    if (*head)
    {
        v_stack_t * tmp = *head;
        head = (*head)->next;
        free(tmp);
    }
}
void *v_peek(v_stack_t *head)
{
    if (head)
        return head->data;
    return NULL;
}

bool v_is_full(v_stack_t *head)
{
    return head ? true : false;
}
bool v_is_empty(v_stack_t *head)
{
    return head ? false : true;
}
void destroy_v_stack(v_stack_t *head)
{
	while(head)
	{
		Stack_t *tmp;
		tmp = head;
		head = head->next;
		free(tmp);
	}
}