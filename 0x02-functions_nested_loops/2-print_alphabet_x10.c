/*Print the alphabet using _puthcar*/
#include "main.h"

/**
 * print_alphabet_x10 - print out the alphabet in lower case 10 times
 *
 * Return: no return value.
 */
void print_alphabet_x10(void)
{
	int i, j;

	for (j = 0; j < 10; j++)
	{
		for (i = 0; i <= 25; i++)
		{
			_putchar((97 + i));
		}
		_putchar(10);
	}
}
