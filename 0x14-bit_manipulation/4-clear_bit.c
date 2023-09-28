#include "main.h"

/**
 * clear_bit - the value of a bit at a given index
 * @n: the number
 * @index: the index of the digit
 * Return: the index.
*/

int clear_bit(unsigned long int *n, unsigned int index)
{
    if (index > 63)
		return (-1);
	*n = *n & (!(1ul << index));
	return (1);
}
