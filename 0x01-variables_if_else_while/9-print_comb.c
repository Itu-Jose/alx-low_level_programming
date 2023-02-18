/*Print combinations*/
#include <stdio.h>

/**
 *main - entry point
 *
 *Description: print combinations of digits 0-9
 *
 *Return: Always 0 (success)
 */
int main(void)
{
	int i;

	putchar(48);
	for (i = 1; i <= 9; i++)
	{
		putchar(44);
		putchar(32);
		putchar((48 + i));
	}
	putchar('\n');
	return (0);
}
