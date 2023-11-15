/*Returns natural square root of an integer*/
#include "main.h"
#include <stdio.h>

/**
* _sqrt - checks condition for square root
* @m: candidate value
* @k: input integer
* Return: square root value
*/

int _sqrt(int m, int k)
{
	if (m * m == k)
		return (m);
	else if (m * m > k)
		return (-1);
	else
		return (_sqrt(m + 1, k));
}

/**
 * _sqrt_recursion - returns a natural square root of an integer
 * @n: input integer
 * Return: square root of number.
 */

int _sqrt_recursion(int n)
{
	return (_sqrt(1, n));
}
