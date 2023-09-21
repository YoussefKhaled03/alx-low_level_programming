#include "lists.h"

/**
* list_len - count the number of nodes
* @h: the start pointer
* Return: return the num of nodes
*/

size_t list_len(const list_t *h)
{
	const list_t* hh = h;
	int i = 0;

	if (h == NULL)
		return (0);
	while (hh->str != NULL) 
	{
		i++;
		hh = hh->next;
	}
	return (i);
}