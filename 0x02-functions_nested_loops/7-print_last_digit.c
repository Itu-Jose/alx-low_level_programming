/*Return last digit of a number*/
#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_last_digit - return the last digit of a number
 * @n: input character
 * Return: 0 (success).
 */
int print_last_digit(int n)
{
	int modulus;
	char mod_ch;

	modulus = abs(n) % 10;
	mod_ch = 48 + modulus;
	_putchar(mod_ch);

	return (modulus);
}
