#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the product of two numbers
 * @argc: number of arguments
 * @argv: list of arguments
 * Return: On success 0.
 * On error, -1 is returned, and errno is set appropriately.
 */
int main(int argc, char *argv[])
{
	int a, b, res;

	if (argc == 3)
	{
		a = atoi(argv[1]);
		b = atoi(argv[2]);
		res = a * b;
		printf("%d\n", res);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
