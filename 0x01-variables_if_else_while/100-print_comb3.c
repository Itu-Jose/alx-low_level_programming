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
	int i, j;

	for (i = 0; i <= 9; i++)
	{
		for (j = 1; j <= 9; j++)
		{
			if (i < j)
			{
				putchar((48 + i));
				putchar((48 + j));
				if ((i + j) < 17)
				{
					putchar(44);
					putchar(32);
				}

			}
		}
	}
	putchar(10);
	return (0);
}
