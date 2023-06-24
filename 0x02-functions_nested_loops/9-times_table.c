/*Print 9 times table*/
#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * times_table - print the 9 times table
 * Return: 0 (success).
 */
void times_table(void)
{
	int i, j, l, r, n;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (j == 0)
			{
				_putchar(48);
			}
			else if (i == 0)
			{
				_putchar(44);
				_putchar(32);
				_putchar(32);
				_putchar(48);
			}
			else
			{
				n = i * j;
				if (n < 10)
				{
					_putchar(44);
					_putchar(32);
					_putchar(32);
					_putchar(48 + n);
				}
				else
				{
					r = abs(n) % 10;
					l = (n - r) / 10;
					_putchar(44);
					_putchar(32);
					_putchar(48 + l);
					_putchar(48 + r);
				}
			}
		}
	_putchar(10);
	}
}
