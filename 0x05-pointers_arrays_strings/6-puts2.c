/*Print every other character of a string*/
#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *	puts2 - print every other character of a string
 * @str: input character string
 * Return: 0 (success).
 */

void puts2(char *str)
{
	int i, len = 0;
	char *s = str;

	while (*str != '\0')
	{
		len++;
		str++;
	}

	for (i = 0; i <= len; i += 2)
	{
		_putchar(*(s + i));
	}
	_putchar(10);
}
