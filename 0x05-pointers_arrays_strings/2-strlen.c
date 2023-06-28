/*Return length of string*/
#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *	_strlen - returns length of string
 * @s: input character string
 * Return: 0 (success).
 */

int _strlen(char *s)
{
	int len = 0;

	while (*s++ != '\0')
		len++;

	return (len);
}
