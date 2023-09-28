#include "main.h"

/**
* binary_to_uint - convert binary to dec
* @b: pointer to the string
* Return: the binary.
*/

unsigned int binary_to_uint(const char *b)
{
	int x = 0, n = 1, i;
	unsigned int sum;

	if (!b)
		return (0);
	while (b[x])
		x++;

	for (i = 0; i < x; i++)
	{
		if (b[i] != '0' && b[i] != '1')
		{
			return (0);
		}
		else
		{
			sum = sum + n * (b[i] - '0');
			n *= 2;
		}
	}
	return (sum);
}
