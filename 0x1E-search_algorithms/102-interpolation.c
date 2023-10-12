#include "search_algos.h"

/**
 * interpolation_search - performs jump search
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 * Return: -1 if NULL or not found
 */
int interpolation_search(int *array, size_t size, int value)
{
	size_t postn = 0, low = 0, high = size - 1;

	if (!array || !size)
		return (-1);

	while (1)
	{
		postn = low + (((double)(high - low) /
					(array[high] - array[low])) * (value - array[low]));
		if (postn >= size)
		{
			printf("Value checked array[%lu] is out of range\n", postn);
			break;
		}
		printf("Value checked array[%lu] = [%d]\n", postn, array[postn]);
		if (array[postn] == value)
			return (postn);
		else if (array[postn] > value)
			high = postn - 1;
		else
			low = postn + 1;
	}
	return (-1);
}
