#include "monty.h"
/* Task 12 - implementing pstr opcode */

/**
 * pstr_atheadstack - prints the string starting at the
 * top of the stack, followed by a new line
 * decription: Prints the ascii of an int value
 * @stack: Point to stack
 * @counter: Count for errors
 * Return: void(NULL)
 */
void pstr_atheadstack(stack_tt **stack, unsigned int counter)
{
	int i = 0;
	stack_tt *itr;
	(void) counter;

	if (*stack == NULL)
	{
		putchar('\n');
		return;
	}
	for (itr = *stack; itr->next != NULL; itr = itr->next)
		i++;
	i++;
	for (; i != 0; itr = itr->prev, i--)
	{
		if (itr->n == 0)
			break;
		if (itr->n < 0 || itr->n > 127)
			break;
		putchar(itr->n);
	}
	putchar('\n');
}
