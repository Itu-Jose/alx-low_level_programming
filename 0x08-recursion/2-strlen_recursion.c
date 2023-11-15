/*Returns length of a string*/
#include "main.h"
#include <stdio.h>

/**
 *	_strlen_recursion - return length of a string
 * @s: input character string
 * Return: no return.
 */

int _strlen_recursion(char *s)
{

	if (!(*s == '\0'))
	{
		return (_strlen_recursion(++s) + 1);
	}
	else
		return (0);
}
