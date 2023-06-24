/*Print every minute of the day*/
#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * jack_bauer - print every minute of the day
 * Return: 0 (success).
 */
void jack_bauer(void)
{
	int i, j, h, m;

	for (i = 48; i < 51; i++)
	{
		for (h = 48; h < 58; h++)
		{
			if (h == 52 && i == 50)
			{
				break;
			}
			for (j = 48; j < 54; j++)
			{
				for (m = 48; m < 58; m++)
				{
					_putchar(i);
					_putchar(h);
					_putchar(58);
					_putchar(j);
					_putchar(m);
					_putchar(10);
				}
			}
		}
	}
}
