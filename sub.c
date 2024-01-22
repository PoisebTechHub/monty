#include "monty.h"
/* Task 6 -implementing sub opcode */

/**
* sub_2elements_ofstack -  subtracts the top element of
* the stack from the second top element of the stack.
* description: Subtracts data from the stack
* @stack: Pointer to a stack
* @counter: Count for errors
* Return: void(NULL)
*/

void sub_2elements_ofstack(stack_tt **stack, unsigned int counter)
{
	stack_tt *itr = *stack, *prev = NULL;
	int value_one = 0, value_two = 0;

	if ((*stack == NULL) || (itr->next == NULL))
	{
		fprintf(stderr, "L%d: can't sub, stack too short\n", counter);
		first->f_error_code = -1;
		return;
	}
	for (; itr->next != NULL; itr = itr->next)
		;
	value_one = itr->n;
	prev = itr->prev;
	value_two = prev->n;
	prev->n = value_two - value_one;
	pop_element_stack(stack, counter);
}
