#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
* *add_node - add a new node
* @head: the start pointer
* @str: the string in the node
* Return: the new node.
*/

list_t *add_node(list_t **head, const char *str)
{
	list_t *nwptr = malloc(sizeof(list_t));

	if (!head || !nwptr)
		return (0);
	nwptr->str = strdup(str);
	if (!nwptr->str)
	{
		free(nwptr);
		return (0);
	}
	nwptr->len = strlen(str);
	nwptr->next = *head;
	*head = nwptr;
	return (nwptr);
}
