/*Reverse input string*/
#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *	rev_string - reverse input string
 * @s: input character string
 * Return: 0 (success).
 */

void rev_string(char *s)
{
	int i, len = 0, midp = 0;
	char c;
	char *str = s;

	while (*s != '\0')
	{
		len++;
		s++;
	}

	midp = len / 2;
	for (i = 1; i <= midp; i++)
	{
		c = *(str + i - 1);
		*(str + i - 1) = *(s - i);
		*(s - i) = c;
	}
}
