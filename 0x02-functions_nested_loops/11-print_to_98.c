/*Print natural numbers*/
#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_number - print the input number
 * @n: starting input value
 * Return: 0 (success).
 */

void print_number(int n)
{
	static const char digits[] = "0123456789";
	const int base = 10;
	char number[10];
	char *num_ptr;
	int neg = 0;

	if (n < 0)
	{
		n *= -1;
		neg = 1;
	}
	num_ptr = &number[9];
	do {
		*num_ptr-- = digits[n % base];
		n /= base;
	} while (n != 0);
	if (neg)
		_putchar('-');
	while (++num_ptr != &number[10])
		_putchar(*num_ptr);
}

/**
 * print_to_98 - print natural numbers from input value to 98
 * @m: starting input value
 * Return: 0 (success).
 */

void print_to_98(int m)
{
	print_number(m);
	while (m != 98)
	{
		if (m < 98)
			++m;
		else
			--m;
		_putchar(44);
		_putchar(32);
		print_number(m);
	}
	_putchar(10);
}


