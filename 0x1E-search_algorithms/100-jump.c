#include "search_algos.h"
/**
 * jump_search - searches for a value in  sorted array using Jump search algo
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 * Return: -1 if NULL || value is not present
 */
int jump_search(int *array, size_t size, int value)
{
	size_t step = (size_t)sqrt(size);
	size_t prevs = 0;

	if (array == NULL)
		return (-1);

	printf("Value checked array[0] = [%d]\n", array[prevs]);

	while (array[prevs] < value)
	{
		prevs += step;

		if (prevs < size)
			printf("Value checked array[%lu] = [%d]\n", prevs, array[prevs]);
		else
			break;
	}

	printf("Value found between indexes [%lu] and [%lu]\n", prevs - step, prevs);

	prevs -= step;

	while (array[prevs] < value)
	{
		printf("Value checked array[%lu] = [%d]\n", prevs, array[prevs]);
		prevs++;

		if (prevs >= size)
			return (-1);
	}

	if (array[prevs] == value)
	{
		printf("Value checked array[%lu] = [%d]\n", prevs, array[prevs]);
		return (prevs);
	}

	return (-1);
}

