/*Using sizeof()*/
#include <stdio.h>

/**
*main - entry point
*
*Description: Prints sizes of various data types
*
*Return: Always 0 (success)
*/

int main(void)
{
	char ch = ' ';
	int type_int = 0;
	long int type_long_int = 0L;
	long long int type_long_long_int = 0LL;
	float type_float = 0.0F;

	printf("Size of a char: %ld byte(s)\n", sizeof(ch));
	printf("Size of an int: %ld byte(s)\n", sizeof(type_int));
	printf("Size of a long int: %ld byte(s)\n", sizeof(type_long_int));
	printf("Size of a long long int: %ld byte(s)\n", sizeof(type_long_long_int));
	printf("Size of a float: %ld byte(s)\n", sizeof(type_float));

	return (0);
}
