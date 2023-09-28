#include "main.h"

/**
* binary_to_uint - convert binary to dec
* @b: pointer to the string
* Return: the binary.
*/

unsigned int binary_to_uint(const char *b)
{
	int x = 0, n = 1;
	unsigned int sum = 0;

	if (!b)
		return (0);
	while (b[x])
		x++;
	x--;
	for (; x >= 0 ; x--)
	{
		if (b[x] != '0' && b[x] != '1')
		{
			return (0);
		}
		else
		{
			sum = sum + n * (b[x] - '0');
			n *= 2;
		}
	}
	return (sum);
}
