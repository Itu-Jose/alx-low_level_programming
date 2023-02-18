/*Print the alphabet*/
#include <stdio.h>

/**
 *main - entry point
 *
 *Description: print the alphabet in lowercase
 *except q and e
 *Return: Always 0 (success)
 */
int main(void)
{
	int i;

	for (i = 0; i <= 25; i++)
	{
		if (i != 4 && i != 16)
			putchar((97 + i));
	}
	putchar('\n');
	return (0);
}
