/*Returns number raised to a power*/
#include "main.h"
#include <stdio.h>

/**
 * _pow_recursion - return factorial of a number
 * @x: base part
 * @y: exponent part
 * Return: no return.
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	else if (y > 1)
		return (_pow_recursion(x, y - 1) * x);
	else
		return (x);
}
