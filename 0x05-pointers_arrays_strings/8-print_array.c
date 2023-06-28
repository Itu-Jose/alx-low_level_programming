/*Print contents of array*/
#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *	print_array - print contents of array
 * @a: pointer to array
 * @n: number of integers to print
 * Return: 0 (success).
 */

void print_array(int *a, int n)
{
	for (i = 0; i <= n; i++)
	{
		_putchar(*(a + i));
	}
	_putchar(10);
}
