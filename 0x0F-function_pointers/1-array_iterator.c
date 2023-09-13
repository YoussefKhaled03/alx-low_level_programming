#include "function_pointers.h"

/**
 * array_iterator - maps an array through a function pointer
 * @array: the array
 * @size: the size of the array
 * @action: function pointer
 *
 * RETURN: void
*/

void array_iterator(int *array, size_t size, void (*action)(int))
{
	for (size_t i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
