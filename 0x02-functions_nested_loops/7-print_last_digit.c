/*Return last digit of a number*/
#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
/**
 * print_last_digit - return the last digit of a number
 * @n: input character
 * Return: 0 (success).
 */
int print_last_digit(int n)
{
	int modulus;
	char mod_ch;

	if (n == INT_MIN)
	{
		modulus = abs(n + 1) % 10;
		mod_ch = 48 + modulus + 1;
	}
	else
	{
		modulus = abs(n) % 10;
		mod_ch = 48 + modulus;
	}
	_putchar(mod_ch);

	return (modulus);
}
