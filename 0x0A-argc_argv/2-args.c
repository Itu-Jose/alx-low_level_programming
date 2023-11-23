#include <stdio.h>

/**
 * main - prints all arguments passed to a function
 * @argc: number of arguments
 * @argv: list of arguments
 * Return: On success 0.
 * On error, -1 is returned, and errno is set appropriately.
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);

	return (0);
}
