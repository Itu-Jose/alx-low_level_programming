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
	int i, j, k;

	for (i = 0; i <= 9; i++)
	{
		for (j = 1; j <= 9; j++)
		{
			for (k = 2; k <= 9; k++)
			{
				if (i < j && j < k)
				{
					putchar((48 + i));
					putchar((48 + j));
					putchar((48 + k));
					if ((i + j + k) < 24)
					{
						putchar(44);
						putchar(32);
					}
				}

			}
		}
	}
	putchar(10);
	return (0);
}
