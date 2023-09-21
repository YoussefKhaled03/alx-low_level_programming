#include "lists.h"

/**
* list_len - count the number of nodes
* @h: the start pointer
* Return: return the num of nodes
*/

size_t list_len(const list_t *h)
{
	int i = 0;

	if (h == NULL)
		return (0);
	while (h->str != NULL) 
	{
		i++;
		h = h->next;
	}
	return (i);
}