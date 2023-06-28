#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
* _strcpy - creates a copy of a string
* @dest: destination of copy
* @src: string to create copy of
* Return: dest
*/

char *_strcpy(char *dest, char *src)
{
	do`{
		*dest++ = *src;
	} while (*src++ != '\0');

	return (dest);
}
