#include "main.h"
#include <stddef.h>
/**
 * get_bit - the value of a bit at a given index
 * @n: the number
 * @index: the index of the digit
 * Return: the index.
*/

int get_bit(unsigned long int n, unsigned int index)
{
	if (index > 63)
		return (-1);
	return ((n >> index) & 1);
}
