/*Print sign of a number*/
#include "main.h"

/**
 * print_sign - prints sign of a number
 * @n: input character
 * Return: 1 (if positive), 0 (is zero), -1 (is negative).
 */
int print_sign(int n)
{

	int res = 0;

	if (n < res)
	{
		res = -1;
		_putchar(45);
	}
	else if (n > res)
	{
		res = 1;
		_putchar(43);
	}
	else
		_putchar(48);

	return (res);
}
