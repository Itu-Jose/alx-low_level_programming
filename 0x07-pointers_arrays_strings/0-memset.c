/*Fill with constant byte*/
#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *  _memset - fill memory with constant byte
 * @s: memory location to fill
 * @b: constant byte to fill
 * @n: number of bytes to fill
 * Return: 0 (success).
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*s++ = b;
	}

	return (s - n);
}
