#include <stdio.h>

/**
 * main - prints outs the name of the program
 * @argc: number of arguments
 * @argv: list of arguments
 * Return: On success 0.
 * On error, -1 is returned, and errno is set appropriately.
 */
int main(int argc, char *argv[])
{
	if (argc > 0)
		printf("%s\n", argv[0]);

	return (0);
}
