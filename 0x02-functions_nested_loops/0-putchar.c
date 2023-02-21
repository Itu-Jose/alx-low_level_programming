/*Print _puthcar*/
#include <stdio.h>
#include "main.h"
#include <string.h>
/**
 *main - entry point
 *
 *Description: print _putchar to output
 *
 *Return: 0 (success - when _putchar printed)
 */

int main(void)
{
	char ch_str[] = "_putchar";
	int i;
	int len = strlen(ch_str);

	for (i = 0; i < len; i++)
		_putchar(ch_str[i]);
	_putchar(10);

	return (0);
}
