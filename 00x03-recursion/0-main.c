#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */

int main(void)
{
	int num = 10;

	for (int i = 2; i <= 10; i += 2)
	{
		printf("The sum of the first %d numbers is: %d.\n", num * i, sum_n(num * i));
	}
	return (0);
}
