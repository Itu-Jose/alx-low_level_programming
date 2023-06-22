/*Check if input character is lowercase*/
#include "main.h"

/**
 * _islower - check if character is in lower case
 *
 * Return: 1 (if lowercase), 0 (otherwise).
 */
int _islower(int c)
{

	int islower = 0;

	if (97 <= c && c <= 122)
		islower = 1;

	return (islower);
}
