/*Print digits*/
#include <stdio.h>

/**
 *main - entry point
 *
 *Description: print digits 0-9
 *
 *Return: Always 0 (success)
 */
int main(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		printf("%d", i);
	}
	putchar('\n');
	return (0);
}
