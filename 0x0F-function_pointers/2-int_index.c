#include "function_pointers.h"

/**
 * int_index - search for int
 * @array: array for search
 * @size: size of the array
 * @cmp: the compare function
 *
 * RETURN: void
*/

int int_index(int *array, int size, int (*cmp)(int))
{
	for (int i = 0; i < size; i++)
	{
		if ((*cmp)(array[i]))
		{
			return (i);
		}
	}
	return (-1);
}
