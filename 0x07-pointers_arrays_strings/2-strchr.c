/*Find a character in memory location*/
#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *  _strchr - find a character located in memory
 * @s: string to search
 * @c: char to find in s
 * Return: c_addr (success).
 */

char *_strchr(char *s, char c)
{
	do	{
		if (*s == c)
			return (s);
	} while (*s++ != '\0');

	return (NULL);
}
