/*Print the alphabet*/
#include <stdio.h>

/**
 *main - entry point
 *
 *Description: print the alphabet in lowercase
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
	putchar('\n');
	return (0);
}
