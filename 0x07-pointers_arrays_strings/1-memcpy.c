/*Copy memory area*/
#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *  _memcpy - copy memory area
 * @dest: memory area to copy to
 * @src: memory area to copy from
 * @n: number of bytes to copy
 * Return: dest (success).
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*dest++ = *src++;
	}

	return (dest - n);
}
