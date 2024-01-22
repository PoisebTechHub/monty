#include "monty.h"
/* Task 0a - implementing the push opcodes */

/**
 * push_element_tostack - Pushes element into the stack
 * description: push element into the stack
 * @stack: Pointer to a stack
 * @counter: Count for error
 * Return: Always 0 (Success)
 */

void push_element_tostack(stack_tt **stack, unsigned int counter)
{
	stack_tt *new, *tail = *stack;
	int n = first->n;
	(void) counter;

	new = malloc(sizeof(stack_tt));
	if (new == NULL)
	{
		fprintf(stderr, "Error: malloc failed\n");
		first->f_error_code = -1;
		return;
	}
	if (*stack == NULL)
	{
		new->prev = NULL;
		new->next = NULL;
		new->n = n;
		*stack = new;
		return;
	}
	while (tail->next != NULL)
		tail = tail->next;
	new->n = n;
	tail->next = new;
	new->prev = tail;
	new->next = NULL;
}
