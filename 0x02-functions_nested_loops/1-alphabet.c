/*Print the alphabet using _puthcar*/
#include "main.h"

/**
 * print_alphabet - print out the alphabet in lower case
 *
 * Return: no return value.
 */
void print_alphabet(void)
{
	int i;

	for (i = 0; i <= 25; i++)
	{
		_putchar((97 + i));
	}
	_putchar(10);
}
