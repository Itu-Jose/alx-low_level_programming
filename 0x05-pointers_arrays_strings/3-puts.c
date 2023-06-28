/*Print string*/
#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *	_puts - print input string
 * @str: input character string
 * Return: 0 (success).
 */

void _puts(char *str)
{
	while (*str++ != '\0')
		_putchar(*str);
	_putchar(10);
}
