/*Compute the absolute value of a number*/
#include "main.h"

/**
 * _abs - computes absolute value of input
 * @n: input character
 * Return: absolute value of n.
 */
int _abs(int n)
{

	if (n > 0)
		return (n);
	else
		return (-1 * n);
}
