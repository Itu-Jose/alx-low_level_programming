/*Print a string in reverse followed by a newline*/
#include "main.h"
#include <stdio.h>

/**
 *	_print_rev_recursion - print string in reverse followed by newline
 * @s: input character string
 * Return: no return.
 */

void _print_rev_recursion(char *s)
{
	if (!(*s == '\0'))
	{
		_print_rev_recursion(++s);
		_putchar(*--s);
	}
}
