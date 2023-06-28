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
	int len = 1;

	while (*s++ != '\0')
		len++;

	while (len--)
		_putchar(*--s);
	_putchar(10);
}
