/*Swap integers*/
#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *  swap_int - swap two integers
 * @a: first input value
 * @b: second input value
 * Return: 0 (success).
 */

void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
