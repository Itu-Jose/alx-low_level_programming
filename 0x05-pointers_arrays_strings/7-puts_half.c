/*Print half of a string*/
#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *	puts_half - print half of a string
 * @str: input character string
 * Return: 0 (success).
 */

void puts_half(char *str)
{
	int i, start, midp, len = 0;
	char *s = str;

	while (*str != '\0')
	{
		len++;
		str++;
	}

	if (len % 2 == 0)
	{
		midp = len - 1;
		start = len / 2;
	}
	else
	{
		midp = len - 1;
		start = (len + 2) / 2;
	}

	for (i = start; i <= midp; i++)
	{
		_putchar(*(s + i));
	}
	_putchar(10);
}
