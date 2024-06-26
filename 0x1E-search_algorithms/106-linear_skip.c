#include "search_algos.h"

/**
 * linear_skip - Searches for an algorithm in a sorted singly
 *               linked list of integers using linear skip.
 * @list: A pointer to the  head of the linked list to search.
 * @value: The value to search for.
 *
 * Return: If the value is not present or the head of the list is NULL, NULL.
 *         Otherwise, a pointer to the first node where the value is located.
 *
 * Description: Prints a value every time it is compared in the list.
 *              Uses the square root of the list size as the jump step.
 */
skiplist_t *linear_skip(skiplist_t *list, int value)
{
	skiplist_t *node, *next;

	if (list == NULL)
		return (NULL);

	for (node = next = list; next != NULL;)
	{
		node = next;
		if (next->express == NULL || next->express->n >= value)
			break;
		next = next->express;
		printf("Value checked at index [%lu] = [%d]\n", next->index, next->n);
	}
	printf("Value found between indexes [%lu] and [%lu]\n", node->index, next->index);

	for (; node != NULL && node->index <= next->index; node = node->next)
	{
		printf("Value checked at index [%lu] = [%d]\n", node->index, node->n);
		if (node->n == value)
			return (node);
	}

	return (NULL);
}
