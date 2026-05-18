
/////////////////////////////
// Create by: Jose Andre ///
////////////////////////////

#pragma once

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <unistd.h>



typedef struct stack_s
{
	int value;
	struct stack_s *next;
}	Stack_t;

typedef struct versatil_stack_s
{
	void *data;
	struct versatil_stack_s *next;
} v_stack_t;

void push(int data, Stack_t **head);
void pop(Stack_t **head);
int peek(Stack_t *head);
bool is_full(Stack_t *head);
bool is_empty(Stack_t *head);
void destroy_stack(Stack_t *head);

void v_push(void *data, v_stack_t **head);
void v_pop(v_stack_t **head);
void *v_peek(v_stack_t *head);
bool v_is_full(v_stack_t *head);
bool v_is_empty(v_stack_t *head);
void destroy_v_stack(v_stack_t *head);

