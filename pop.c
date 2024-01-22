#include "monty.h"
/* Task 2 - implementing the pop opcode */

/**
 * pop_element_stack -removes the top element of the stack
 * description: Removes top element from stack
 * @stack: Pointer to stack
 * @counter: Count for errors
 * Return: void(NULL)
 */
void pop_element_stack(stack_tt **stack, unsigned int counter)
{
	stack_tt *itr, *tmp;

	itr = *stack;
	if (*stack == NULL)
	{
		fprintf(stderr, "L%d: can't pop an empty stack\n", counter);
		first->f_error_code = -1;
		return;
	}
	if (itr->next == NULL)
	{
		free(itr);
		*stack = NULL;
		return;
	}
	for (itr = *stack; itr->next != NULL; itr = itr->next)
		;
	tmp = itr->prev;
	free(itr);
	tmp->next = NULL;
}
