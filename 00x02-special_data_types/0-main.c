#include "main.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */

int main(void)
{
	enum constant
		{ITEM_NUM = 3, DEL = 'a' - 'A'};
	PTR_STR str1 = "whatever we wear", str1_cp;
	STRING moon = {str1, "we become beautiful",
					"moon viewing!"
	};
	STRING moon_upper;
	PTR_STR str2;
	int i, term = 0;

	str1_cp = malloc(strlen(str1) + 1);

	if (str1_cp == NULL)
	{
		printf("Memory allocation failed.\n");
		return (1);
	}
	else
	{
		str1_cp = str_copy(str1);
		printf("The copied string is: %s\n.", str1_cp);
	}

	for (i = 0; i < ITEM_NUM; i++)
	{
		moon_upper[i] = malloc((strlen(str1) + 1) * (sizeof(char)));
		if (moon_upper[i] == NULL)
		{
			printf("malloc() failed.\n");
			term = 1;
			i = ITEM_NUM;
		}
		moon_upper[i] = convert2upper(moon[i]);
		printf("Original string: %s\n.", moon[i]);
	}

	for (i = 0; i < ITEM_NUM; i++)
	{
		printf("Converted string: %s\n.", moon_upper[i]);
		free(moon_upper[i]);
	}
	return (0);
}
