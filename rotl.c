#include "monty.h"
/* Task 13 -implementing the rotl opcode */

/**
 * rotl_stack_top - Rotates the stack to top
 * description: Any top element of the stack becomes the last
 * @stack: Pointer to a stack
 * @counter: Count for error
 * Return: Void
 */

void rotl_stack_top(stack_tt **stack, unsigned int counter)
{
	stack_tt *head, *tail, *newtail;

	head = *stack;
	if (*stack == NULL)
		return;
	for (tail = head; tail->next != NULL; tail = tail->next)
		;
	if (tail == head)
		return;
	if (tail->prev == head)
	{
		swap_2elements_atheadstack(stack, counter);
		return;
	}
	newtail = tail->prev;
	newtail->next = NULL;
	tail->prev = NULL;
	tail->next = head;
	head->prev = tail;
	*stack = tail;
}
