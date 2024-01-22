#include "monty.h"
/* Task 7 - implementing the div opcode */

/**
 * divide_2elements_ofstack - divides the second top element
 * of the stack by the top element of the stack
 * description: Divides the value from top two elements in stack
 * @stack: Pointer to a stack
 * @counter: Count for errors
 * Return: null
 */

void divide_2elements_ofstack(stack_tt **stack, unsigned int counter)
{
	stack_tt *itr = *stack, *prev = NULL;
	int value_one = 0, value_two = 0;

	if ((*stack == NULL) || (itr->next == NULL))
	{
		fprintf(stderr, "L%d: can't div, stack too short\n", counter);
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
	prev->n = value_two / value_one;
	pop_element_stack(stack, counter);
}
