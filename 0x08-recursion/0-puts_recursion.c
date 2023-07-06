/*Print a string followed by a newline*/
#include "main.h"
#include <stdio.h>

/**
 *	_puts_recursion - print string followed by newline
 * @s: input character string
 * Return: no return.
 */

void _puts_recursion(char *s)
{
	_putchar(*s);
	if (!(*s == '\0'))
	{
		_puts_recursion(++s);
	}
	else
		_putchar(10);
}
