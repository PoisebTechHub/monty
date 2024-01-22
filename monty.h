#define _POSIX_C_SOURCE 200809
#ifndef MONTY_H
#define MONTY_H

/*== Standard Libraries ==*/
#include <sys/types.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <string.h>
#include <errno.h>
#include <strings.h>
#include <stddef.h>
#include <fcntl.h>

/*== Structure Declarations ==*/
/**
 * struct variables - struct to hold variables
 * @n: value to pass to stack
 * @f_error_code: checks for errors
 *
 */
typedef struct variables
{
	int n;
	int f_error_code;
} vars;

extern vars *first;

/**
 * struct stack_s - doubly linked list representation of a stack (or queue)
 * @n: integer
 * @prev: points to the previous element of the stack (or queue)
 * @next: points to the next element of the stack (or queue)
 *
 * Description: doubly linked list node structure
 * for stack, queues, LIFO, FIFO Holberton project
 */
typedef struct f_stack_s
{
	int n;
	struct f_stack_s *prev;
	struct f_stack_s *next;
} stack_tt;

/**
 * struct instruction_s - opcode and its function
 * @f_opcode: the opcode
 * @f: function to handle the opcode
 *
 * Description: opcode and its function
 * for stack, queues, LIFO, FIFO Holberton project
 */
typedef struct instruction_s
{
	char *f_opcode;
	void (*f)(stack_tt **stack, unsigned int counter);
} instruction_tt;

/*== prototype functions ==*/
size_t f_print_q(const stack_tt *h);
size_t f_stack_len(const stack_tt *h);
stack_tt *f_add_stackstart(stack_tt **head, const int n);
stack_tt *f_push_stack(stack_tt **head, const int n);
void f_free_stack(stack_tt *stack);
stack_tt *f_add_dnodeint_end(stack_tt **head, const int n);
int f_opcode_finder(stack_tt **stack, char *linebuff, unsigned int counter);
int f_opcode_loop(char **argv);

/*== Other Prototype functions ==*/
int f_tokenize(stack_tt **stack, char *line, unsigned int counter);
void push_element_tostack(stack_tt **stack, unsigned int counter);
void function_pall(stack_tt **stack, unsigned int counter);
void pint_atheadstack (stack_tt **stack, unsigned int counter);
void pop_element_stack(stack_tt **stack, unsigned int counter);
void swap_2elements_atheadstack(stack_tt **stack, unsigned int counter);
void add_2elements_tostack(stack_tt **stack, unsigned int counter);
void function_nop(stack_tt **stack, unsigned int counter);
void sub_2elements_ofstack(stack_tt **stack, unsigned int counter);
void multiply_2elements_ofstack(stack_tt **stack, unsigned int counter);
void function_mod(stack_tt **stack, unsigned int counter);
void divide_2elements_ofstack(stack_tt **stack, unsigned int counter);
void pchar_atheadstack(stack_tt **stack, unsigned int counter);
void pstr_atheadstack(stack_tt **stack, unsigned int counter);
void rotl_stack_top(stack_tt **stack, unsigned int counter);
void rotr_stack_buttom(stack_tt **stack, unsigned int counter);

#endif /*== MONTY_H ==*/
