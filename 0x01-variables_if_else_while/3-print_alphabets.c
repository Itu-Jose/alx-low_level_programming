/*Print the alphabet*/
#include <stdio.h>

/**
 *main - entry point
 *
 *Description: print the alphabet in lowercase
 *then in uppercase
 *
 *Return: Always 0 (success)
 */
int main(void)
{
	int i;

	for (i = 0; i <= 25; i++)
	{
		putchar((97 + i));
	}
	for (i = 0; i <= 25; i++)
	{
		putchar((65 + i));
	}
	putchar('\n');
	return (0);
}
