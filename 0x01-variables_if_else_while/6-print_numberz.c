/*Print numbers in ASCII*/
#include <stdio.h>

/**
 *main - entry point
 *
 *Description: print numbers in ASCII
 *
 *Return: Always 0 (success)
 */
int main(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		putchar((48 + i));
	}
	putchar('\n');
	return (0);
}
