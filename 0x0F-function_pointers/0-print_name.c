/*Print a name*/
#include "function_pointers.h"

/**
 *  print_name - print a name
 * @name: name to print
 * @f: print function to use
 * Return: 0 (success)
 */

void print_name(char *name, void (*f)(char *))
{
	f(name);
}
