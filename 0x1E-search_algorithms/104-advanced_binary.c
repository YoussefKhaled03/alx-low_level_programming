#include "search_algos.h"

/**
  * advanced_binary_recursive - Searches recursively for a value in a sorted
  *                             array of integers using binary search.
  * @array: A pointer to the first element of the [sub]array to search.
  * @left: The starting index of the [sub]array to search.
  * @right: The ending index of the [sub]array to search.
  * @value: The value to search for.
  *
  * Return: If the value is not present, -1.
  *         Otherwise, the index where the value is located.
  *
  * Description: Prints the [sub]array being searched after each change.
  */
int advanced_binary_recursive(int *array, size_t left, size_t right, int value)
{
    size_t i;

    if (left <= right)
    {
        printf("Searching in array: ");
        for (i = left; i < right; i++)
            printf("%d, ", array[i]);
        printf("%d\n", array[i]);

        i = left + (right - left) / 2;
        if (array[i] == value)
        {
            if (i == 0 || array[i - 1] != value)
                return (i);
            return (advanced_binary_recursive(array, left, i, value));
        }
        if (array[i] < value)
            return (advanced_binary_recursive(array, i + 1, right, value));
        return (advanced_binary_recursive(array, left, i, value));
    }

    return (-1);
}