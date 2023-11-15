/*Returns factorial of a number*/
#include "main.h"
#include <stdio.h>

/**
 *	factorial - return factorial of a number
 * @n: input character string
 * Return: no return.
 */

int factorial(int n)
{

	if (n < -1)
		return (-1);
	else if (n != 1)
		return (factorial(n - 1) * n);
	else
		return (1);
}
