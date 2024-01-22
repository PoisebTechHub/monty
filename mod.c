#include "monty.h"
/* Task 9 - implementing mod opcode */

/**
 * function_mod - computes the rest of the division of the second
 * top element of the stack by the top element of the stack.
 * description: Remaider of second to top divided by top
 * @stack: Pointer to a stack
 * @counter: Count for errors
 * Return: void(NULL)
 */

void function_mod(stack_tt **stack, unsigned int counter)
{
	stack_tt *itr = *stack, *prev = NULL;
	int value_one = 0, value_two = 0;

	if ((*stack == NULL) || (itr->next == NULL))
	{
		fprintf(stderr, "L%d: can't mod, stack too short\n", counter);
		first->f_error_code = -1;
		return;
	}
	for (; itr->next != NULL; itr = itr->next)
		;
	value_one = itr->n;
	prev = itr->prev;
	value_two = prev->n;
	if (value_one == 0)
	{
		fprintf(stderr, "L%d: division by zero\n", counter);
		first->f_error_code = -1;
		return;
	}
	prev->n = value_two % value_one;
	pop_element_stack(stack, counter);
}
