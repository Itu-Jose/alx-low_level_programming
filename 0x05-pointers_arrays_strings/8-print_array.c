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
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", *(a + i));
		if (i < n - 1)
			printf(", ");
	}
	printf("\n");
}
