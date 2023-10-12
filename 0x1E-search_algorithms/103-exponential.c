#include "search_algos.h"

/**
 * exponential_search - searches for a value in sorted array using Exponential
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 * Return: -1 if its NULL or not found
 */
int exponential_search(int *array, size_t size, int value)
{
	size_t i = 1, newsize = 0;
	int ret;

	if (!array || !size)
		return (-1);

	while (i < size && array[i] < value)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		i <<= 1;
	}
	newsize = (i >= size ? size : i + 1) - (i >> 1);
	i >>= 1;
	printf("Value found between indexes [%lu] and [%lu]\n",
			i, i << 1 >= size ? size - 1 : i << 1);
	ret = binary_search(array + i, newsize, value);
	return (ret == -1 ? ret : ret + (int)i);
}

/**
 * binary_search - binary search
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 * Return: -1 if its NULL or not found
 */
int binary_search(int *array, size_t size, int value)
{
	size_t i = 0;
	int *arr = array;

	if (!array)
		return (-1);

	while (size)
	{
		for (i = 0, printf("Searching in array: "); i < size; i++)
			printf("%d%s", arr[i], i + 1 == size ? "\n" : ", ");

		i = (size - 1) / 2;
		if (arr[i] == value)
			return ((arr - array) + i);
		else if (arr[i] > value)
			size = i;
		else
		{
			arr += (i + 1);
			size -= (i + 1);
		}
	}
	return (-1);
}
