/*Check if input character is lowercase*/
#include "main.h"

/**
 * _isalpha - check if character is in lower case
 * @c: input character to test
 * Return: 1 (if lowercase), 0 (otherwise).
 */
int _isalpha(int c)
{

	int isalpha = 0;

	if ((65 <= c &&  90 >= c) || (97 <= c && 122 >= c))
		isalpha = 1;

	return (isalpha);
}
