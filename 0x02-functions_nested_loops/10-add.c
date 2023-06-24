/*Add two integers*/
#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

/**
 * add - add two integers
 * @n - first number to add
 * @m - second number to add
 * Return: sum of n and m (success).
 */

int add(int n, int m)
{
	long int sum;

	sum = n + m;
	if (!(INT_MIN > sum || INT_MAX < sum))
		return (sum);
	else
		return (0);
}
