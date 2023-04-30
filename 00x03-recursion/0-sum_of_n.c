#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
* sum_n - sums up the first n numbers
* @n: integer > 0
* return: sum of first n numbers
*/

int sum_n(int n)
{
	if (n == 0)
	{
		return (0);
	}
	else
	{
		return (sum_n(n - 1) + n);
	}
}
