/*Search for integer*/
#include "function_pointers.h"
#include <stddef.h>

/**
 * int_index - search for integer
 * @array: array of elemnts
 * @size: size of the array
 * @cmp: function to execute
 * Return: index of integer (success)
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i, ind = -1;

	for (i = 0; i < size; i++)
	{
		if ((*cmp)(array[i]))
		{
			ind = i;
			break;
		}
	}
	return (ind);
}
