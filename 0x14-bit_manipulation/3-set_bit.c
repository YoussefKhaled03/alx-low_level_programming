#include "main.h"

/**
 * set_bit - the value of a bit at a given index
 * @n: the number
 * @index: the index of the digit
 * Return: the index.
*/

int set_bit(unsigned long int *n, unsigned int index)
{

	if (index > 63)
		return (-1);
	return (*n | (1 << index));
}
