
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
	void * value;
	void * next;
}	Stack_t;


void push(void *data, Stack_t **my_stack);
void pop(Stack_t **my_stack);
void * peek(Stack_t *my_stack);
bool is_full(Stack_t *my_stack);
bool is_empty(Stack_t *my_stack);


