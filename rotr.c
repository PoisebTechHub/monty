#include "monty.h"
/* Task 14 - implementing rotr opcode */

/**
 * rotr_stack_buttom - Rotate the stack to the bottom of list
 * description: Any last element of the stack becomes the top
 * @stack: Pointer to a stack
 * @counter: Count for error
 * Return: Void(NULL)
 */

void rotr_stack_buttom(stack_tt **stack, unsigned int counter)
{
	stack_tt *head, *tail, *newhead;

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
	newhead = head->next;
	newhead->prev = NULL;
	head->next = NULL;
	head->prev = tail;
	tail->next = head;
	*stack = newhead;
}
