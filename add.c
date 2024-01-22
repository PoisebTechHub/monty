#include "monty.h"
/* Task 4 - implementing add opcode */

/**
 * add_2elements_tostack - adds the top two elements of the stack
 * description: Adds data in stack
 * @stack: dbl ptr to a stack
 * @counter: ln count for errors
 * Return: void
 */

void add_2elements_tostack(stack_tt **stack, unsigned int counter)
{
	stack_tt *itr = *stack, *prev = NULL;
	int value_one = 0, value_two = 0;

	if ((*stack == NULL) || (itr->next == NULL))
	{
		fprintf(stderr, "L%d: can't add, stack too short\n", counter);
		first->f_error_code = -1;
		return;
	}
	for (; itr->next != NULL; itr = itr->next)
		;
	value_one = itr->n;
	prev = itr->prev;
	value_two = prev->n;
	prev->n = value_one + value_two;
	pop_element_stack(stack, counter);
}
