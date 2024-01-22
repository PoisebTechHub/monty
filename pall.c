#include "monty.h"
/* Task 0b - implementing pall opcodes */

/**
 * function_pall - prints all the values on the stack
 * starting from the top of the stack
 * decription: prints linked list in reverse
 * @stack: Pointer to stack
 * @counter: Count for errors
 * Return: null
 */

void function_pall(stack_tt **stack, unsigned int counter)
{
	int i = 0;
	stack_tt *itr;
	(void) counter;

	if (*stack == NULL)
		return;
	for (itr = *stack; itr->next != NULL; itr = itr->next)
		i++;
	i++;
	for (; i != 0; itr = itr->prev, i--)
		printf("%d\n", itr->n);
}
