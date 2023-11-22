#include <stdio.h>

/**
 * main - prints the number of arguments passed to the function
 * @argc: number of arguments
 * @argv: list of arguments
 * Return: On success 0.
 * On error, -1 is returned, and errno is set appropriately.
 */
int main(int argc, char *argv[])
{
	if (argv[0])
		printf("%d\n", argc - 1);

	return (0);
}
