#include "monty.h"
/* Task 8 - implementing the mul opcode */

/**
 * multiply_2elements_ofstack - multiplies the second top element
 * of the stack with the top element of the stack.
 * @stack: Pointer to the head of stack
 * @counter: index of line in file
 * Return: null
 */

void multiply_2elements_ofstack(stack_tt **stack, unsigned int counter)
{
	stack_tt *itr = *stack, *prev = NULL;
	int value_one = 0, value_two = 0;

	if ((*stack == NULL) || (itr->next == NULL))
	{
		fprintf(stderr, "L%d: can't mul, stack too short\n", counter);
		first->f_error_code = -1;
		return;
	}
	for (; itr->next != NULL; itr = itr->next)
		;
	value_one = itr->n;
	prev = itr->prev;
	value_two = prev->n;
	prev->n = value_one * value_two;
	pop_element_stack(stack, counter);
}
