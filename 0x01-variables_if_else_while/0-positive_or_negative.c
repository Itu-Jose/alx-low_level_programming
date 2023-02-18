/*Test polarity of random number*/
#include <stdlib.h>
#include <time.h>

/**
 *main - entry point
 *
 *Description: generates random number and checks sign
 *
 *Return: Always 0 (success)
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		puts("is positive");
	}
	else if (n < 0)
	{
		puts("is negative");
	}
	else
		puts("is zero");

	return (0);
}
