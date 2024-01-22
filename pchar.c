#include "monty.h"
/* Task 11 - implementing the pchar opcode */

/**
 * pchar_atheadstack - prints the char at the top of
 * the stack, followed by a new line.
 * description: Prints value at top of stack lists
 * @stack: Pointer to stack
 * @counter: Count for errors
 * Return: void(NULL)
 */
void pchar_atheadstack(stack_tt **stack, unsigned int counter)
{
	int n = 0;
	stack_tt *itr;
	(void) counter;

	if (*stack == NULL)
	{
		fprintf(stderr, "L%d: can't pchar, stack empty\n", counter);
		first->f_error_code = -1;
		return;
	}
	for (itr = *stack; itr->next != NULL; itr = itr->next)
	;
	if (itr->n >= 0 && itr->n <= 127)
	{
		n = itr->n;
		putchar(n);
		putchar('\n');
	}
	else
	{
		fprintf(stderr, "L%d: can't pchar, value out of range\n", counter);
		first->f_error_code = -1;
		return;
	}
}
