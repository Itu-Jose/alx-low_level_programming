/*Print string in reverse*/
#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *	print_rev - print input string in reverse
 * @s: input character string
 * Return: 0 (success).
 */

void print_rev(char *s)
{
	int i, len = 0;

	while (*s++ != '\0')
		len++;

	for (i = 0; i <= len; i++)
	{
		_putchar(*(s - i - 1));
	}
	_putchar(10);
}
