#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    char s[] = "Use malloc() to allocate memory";
    char *ptr;
	
	ptr = str_copy(s);

    printf("String to copy: %s\n", s);
    printf("String after copying: %s\n", ptr);
    
	return (0);
}
