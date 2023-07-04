/*Find number of bytes in initial segment of string containing certain bytes*/
#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *  _strspn - find number of bytes in inital segment of string
 * @s: string to search
 * @accept: bytes to find
 * Return: number of bytes (success).
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int n = 0;
	char *accept_reset = accept;

	do {
		while (*accept != '\0')
		{
			if (*accept == *s)
			{
				n++;
				break;
			}
			accept++;
		}

		if (*accept == '\0')
			return (n);
		accept = accept_reset;
	} while (*s++ != '\0');

	return (n);
}
