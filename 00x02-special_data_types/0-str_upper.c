#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
* str_copy - creates a copy of a string
* @str: string to copy
* Return: pointer to copy of string
*/

char *str_copy(char *str)
{
	int i;
	char *ptr_str;

	ptr_str = malloc(strlen(str) + 1);

	if (ptr_str != NULL)
	{
		for (i = 0; str[i]; ++i)
			ptr_str[i] = str[i];
		ptr_str[i] = '\0';
	}
	else
	{
		printf("malloc() function failed.\n");
		return (NULL);
	}
	return (ptr_str);
}

/**
* convert2upper - converts a string to uppercase
* @str: string to convert to uppercase
* Return: pointer to converted string
*/

char *convert2upper(char *str)
{
	int i;
	char *str_ptr;
	const int DELT = 'a' - 'A';

	str_ptr = malloc(strlen(str) + 1);

	if (str_ptr == NULL)
	{
		printf("malloc() function failed.\n");
		return (NULL);
	}
	else
	{
		for (i = 0; str[i]; i++)
		{
			if ((str[i] >= 'a') && (str[i] <= 'z'))
				str_ptr[i] = str[i] - DELT;
			else
				str_ptr[i] = str[i];
		}
		str_ptr[i] = '\0';
	}
	return (str_ptr);
}
