#include "monty.h"
/* Taks 1 - implementing the pint oppcode */

/**
 * pint_atheadstack - prints the value at the top of the stack
 * followed by a new line
 * description: Prints value at top
 * @stack: Pointer to stack
 * @counter: Count for errors
 * Return: null
 */

void pint_atheadstack(stack_tt **stack, unsigned int counter)
{
	stack_tt *itr;
	(void) counter;

	if (*stack == NULL)
	{
		fprintf(stderr, "L%d: can't pint, stack empty\n", counter);
		first->f_error_code = -1;
		return;
	}
	for (itr = *stack; itr->next != NULL; itr = itr->next)
		;
	printf("%d\n", itr->n);
}
