/*Returns 1 if string is palindrome and 0 otherwise*/
#include "main.h"
#include <stdio.h>

/**
 * palindrome - validate palindrome
 * @s1: input string
 * @n: counter variable 1
 * @m: counter variable 2
 * Return: 1 if palindrome, 0 otherwise
 */

int palindrome(int n, int m, char *s1)
{
	if (n == m)
		return (1);
	else if ((m - n == 1) && (*(s1 - n) == *(s1 - m)))
		return (1);
	else if (*(s1 - n) == *(s1 - m))
		return (palindrome(++n, --m, s1));
	else
		return (0);
}
/**
* is_palindrome - checks if string is a palindrome
* @s: input string
* Return: 1 if string is palindrome, 0 otherwise
*/

int is_palindrome(char *s)
{
	int str_len = 0;

	while (*s++ != '\0')
		str_len++;
	s = (s - 2);
	return (palindrome(0, --str_len, s));
}

