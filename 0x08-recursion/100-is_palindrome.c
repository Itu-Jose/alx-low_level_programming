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
* stringlen- returns length of string
* @s1: input string
* Return: length of string
*/

int stringlen(char *s1)
{
	if (*s1++ == '\0')
	{
		return (0);
	}
	else
	{
		return (1 + stringlen(s1));
	}
}

/**
* is_palindrome - checks if string is a palindrome
* @s: input string
* Return: 1 if string is palindrome, 0 otherwise
*/

int is_palindrome(char *s)
{
	int str_len;

	str_len = stringlen(s);
	s += (str_len - 1);
	if (*s == 1)
		return (1);
	else
		return (palindrome(0, --str_len, s));
}

