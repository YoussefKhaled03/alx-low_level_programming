#include "function_pointers.h"

/**
 * print_name - the name discribe
 * @name: input
 * @f: input
 * RETURN: void
*/

void print_name(char *name, void (*f)(char *))
{
	if (name && f)
	{
		f(name);
	}
}
