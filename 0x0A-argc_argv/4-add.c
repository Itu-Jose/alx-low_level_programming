#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the product of two positive numbers
 * @argc: number of arguments
 * @argv: list of arguments
 * Return: On success 0.
 * On error, -1 is returned, and errno is set appropriately.
 */
int main(int argc, char *argv[])
{
	int i, b, res = 0;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	for (i = 0; i < argc; i++)
	{
		b = atoi(argv[i]);
		if (b == 0)
		{
			printf("Error\n");
			return (1);
		}
		res += b;
	}
	printf("%d\n", res);

	return (0);
}
