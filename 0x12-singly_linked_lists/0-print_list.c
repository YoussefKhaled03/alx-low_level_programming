#include "lists.h"

/**
* print_list - function to print the linked list
* @h: the start pointer
* return: the number of nodes.
*/

size_t print_list(const list_t *h)
{
	int i = 0;
	const list_t* hh = h;

	if (h == NULL)
		return (0);
	while (hh != NULL)
	{
		if (hh->str == NULL)
			printf("[0] (nil)\n");
		else
		{
			printf("[%i] %s\n", hh->len, hh->str);
		}
		hh = hh->next;
		i++;
	}
	return (i);
}
