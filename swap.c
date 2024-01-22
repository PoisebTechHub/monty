#include "monty.h"
/* Task 3 -implementing the sawp opcode */

/**
 * swap_2elements_atheadstack - swaps the top two elements of the stack.
 * description: Switches the top two elements in stack
 * @stack: Pointer to stack
 * @counter: Count for errors
 * Return: void(NULL)
 */

void swap_2elements_atheadstack(stack_tt **stack, unsigned int counter)
{
	stack_tt *itr, *prev;
	int holdt, holdp;
	int len;

	itr = *stack;
	if (*stack == NULL)
	{
		fprintf(stderr, "L%d: can't swap, stack too short\n", counter);
		first->f_error_code = -1;
		return;
	}
	for (len = 1, itr = *stack; itr->next != NULL; len++, itr = itr->next)
		;
	if (len < 2)
	{
		fprintf(stderr, "L%d: can't swap, stack too short\n", counter);
		first->f_error_code = -1;
		return;
	}
	holdt = itr->n;
	prev = itr->prev;
	holdp = prev->n;
	itr->n = holdp;
	prev->n = holdt;
}
