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

	for (i = 0; i <= 9; i++)
	{
		putchar((48 + i));
		if (i < 9)
		{
			putchar(44);
			putchar(32);

		}
	}
	putchar(10);
	return (0);
}
