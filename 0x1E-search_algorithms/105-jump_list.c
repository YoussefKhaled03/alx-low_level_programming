#include "search_algos.h"

/**
 * jump_list - Searches for an algorithm in a sorted singly
 *             linked list of integers using jump search.
 * @list: A pointer to the  head of the linked list to search.
 * @size: The number of nodes in the list.
 * @value: The value to search for.
 *
 * Return: If the value is not present or the head of the list is NULL, NULL.
 *         Otherwise, a pointer to the first node where the value is located.
 *
 * Description: Prints a value every time it is compared in the list.
 *              Uses the square root of the list size as the jump step.
 */
listint_t *jump_list(listint_t *list, size_t size, int value)
{
	size_t jump, i, j;
	listint_t *node, *next;

	if (list == NULL)
		return (NULL);

	jump = sqrt(size);
	for (node = next = list; next->index < jump && next->next != NULL;)
	{
		node = next;
		for (i = 0; i < jump && next->next != NULL; i++)
			next = next->next;
		printf("Value checked at index [%lu] = [%d]\n", next->index, next->n);
	}
	printf("Value found between indexes [%lu] and [%lu]\n", node->index, next->index);

	for (i = node->index, j = next->index; i <= j && i < size; i++)
	{
		printf("Value checked at index [%lu] = [%d]\n", i, node->n);
		if (node->n == value)
			return (node);
		node = node->next;
	}

	return (NULL);
}
