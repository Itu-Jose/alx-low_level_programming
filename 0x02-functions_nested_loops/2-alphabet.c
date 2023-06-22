/*Print the alphabet using _puthcar*/
#include "main.h"

/**
 *main - entry point
 *
 *Description: print the alphabe in lowercase
 *
 *Return: 0 (success - when _putchar printed)
 */

int main(void)
{
	print_alphabet();

	return (0);
}

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
