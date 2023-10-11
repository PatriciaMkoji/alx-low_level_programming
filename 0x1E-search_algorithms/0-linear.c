#include "search_algos.h"

/**
 * linear_search - searches for a value in an array using the Linear search alg
 * @array: pointer to first element of the search array
 * @size: number of elements in array
 * @value: value to search for
 * Return: -1 if array is NULL else the value
 */

int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%lu] = %d\n", i, array[i]);

		if (array[i] == value)
		{
			printf("Found %d at index: [%lu]\n", value, i);
			return (i);
		}
	}
	return (-1);
}
