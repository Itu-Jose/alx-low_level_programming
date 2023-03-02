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
	char dst_src[len_dest + len_src + 1];

	ptr_str = dst_src;

	for (i = 0; i < len_dest; i++)
	{
		dst_src[i] = *(dest + i);
	}

	for (i = 0; i < len_src; i++)
	{
		dst_src[len_dest + i] = *(src + i);
	}

	dst_src[len_dest + len_src] = '\0';

	return (ptr_str);
}

