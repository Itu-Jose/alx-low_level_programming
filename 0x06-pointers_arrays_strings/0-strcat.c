#include "main.h"
#include <string.h>
#include <stdio.h>
/**
* _strcat - concatenates two strings
* @src: string to append
* @dest: string to append to
* Return: string containing src and dest
*/

char *_strcat(char *dest, char *src)
{
	int len_dest, len_src, i;
	char *ptr_str;

	len_dest = strlen(dest);
	len_src = strlen(src);

	for (i = 0; i < len_src; i++)
	{
		*(dest + len_dest + i) = *(src + i);
	}

	*(dest + len_dest + len_src) = '\0';

	return (dest);
}

