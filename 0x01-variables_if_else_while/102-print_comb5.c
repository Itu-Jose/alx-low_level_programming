/*Print combinations*/
#include <stdio.h>

/**
 *main - entry point
 *
 *Description: print two-digit combinations from 0 to 99
 *
 *Return: Always 0 (success)
 */
int main(void)
{
	int i, j;

	for (i = 0; i <= 99; i++)
	{
		for (j = 1; j <= 99; j++)
		{
			if (i != j)
			{
				printf("%02d %02d", i, j);
				if (i != 98 || j != 99)
				{
					printf(", ");
				}

			}
		}
	}
	putchar(10);
	return (0);
}
