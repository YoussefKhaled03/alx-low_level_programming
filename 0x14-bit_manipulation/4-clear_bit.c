#include "main.h"


int clear_bit(unsigned long int *n, unsigned int index)
{
    if (index > 63)
		return (-1);
	*n = *n & (!(1ul << index));
	return (1);
}
