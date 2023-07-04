/*Find any of string of bytes in a string*/
#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *  _strpbrk - find any of a string of bytes in a string
 * @s: string to search
 * @accept: bytes to find
 * Return: pointer to first occurrence of character (success).
 */

char *_strpbrk(char *s, char *accept)
{
	char *accept_reset = accept;

	do {
		while (*accept != '\0')
		{
			if (*accept == *s)
			{
			return (s);
			}
			accept++;
		}
		accept = accept_reset;
	} while (*s++ != '\0');

	return (NULL);
}
