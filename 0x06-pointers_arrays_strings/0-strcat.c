#include "main.h"

/**
* str_len - concatenates two strings
* @str: input string
* Return: length of str
*/

int str_len(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; ++i)
		;

	return (i);
}

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

	len_dest = str_len(dest);
	len_src = str_len(src);

	for (i = 0; i < len_src; i++)
	{
		*(dest + len_dest + i) = *(src + i);
	}

	*(dest + len_dest + len_src) = '\0';

	return (dest);
}

