#include "monty.h"
#include <ctype.h>

/**
 * m_pchar - print character from top of stack
 * @stack: double pointer to top of stack
 * @line_number: line number of current operation
 *
 * Return: void
 */
void m_pchar(stack_t **stack, unsigned int line_number)
{
	int ch;

	if (var.stack_len < 1)
	{
		dprintf(STDOUT_FILENO,
			"L%u: can't pchar, stack empty",
			line_number);
		exit(EXIT_FAILURE);
	}
	ch = (*stack)->n;
	if (!isprint(ch))
	{
		dprintf(STDOUT_FILENO,
			"L%u: can't pchar, value out of range",
			line_number);
		exit(EXIT_FAILURE);
	}
	printf("%c\n", ch);
}
