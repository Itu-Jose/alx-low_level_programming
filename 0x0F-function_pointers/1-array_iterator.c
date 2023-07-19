/*Execute fucntion for each element of array*/
#include "function_pointers.h"
#include <stddef.h>

/**
 * array_iterator - execute function for each element of array
 * @array: array of elemnts
 * @size: size of the array
 * @action: function to execute
 * Return: 0 (success)
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned long int i;

	for (i = 0; i < size; i++)
	{
		(*action)(array[i]);
	}
}
