#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
* str_copy - creates a copy of a string
* @str1: string to copy
* @str2: string to hold the copy
* Return: Always 0 on Success
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
