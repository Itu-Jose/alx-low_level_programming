/*Returns 1 if number is prime and 0 otherwise*/
#include "main.h"
#include <stdio.h>

/**
* _prime - checks if number is prime
* @num: counter value
* @i: input integer
* Return: 1 if prime, 0 otherwise
*/

int _prime(int num, int i)
{
	if (i == 1)
		return (1);
	if (num % i == 0)
		return (0);
	else
		return (_prime(num, i - 1));
}

/**
 * is_prime_number - checks if number is prime
 * @n: input integer
 * Return: 1 if prime, 0 otherwise
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (_prime(n, n - 1));
}
