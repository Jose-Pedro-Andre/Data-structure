
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


void push(int data, Stack_t **my_stack);
void pop(Stack_t **my_stack);
int peek(Stack_t *my_stack);
bool is_full(Stack_t *my_stack);
bool is_empty(Stack_t *my_stack);


