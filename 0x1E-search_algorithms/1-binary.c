#include "search_algos.h"
/**
 * binary_search - searches for a value in sorted array using the Binary search
 * @array: pointer t the first element of array
 * @size: number of elements in array
 * @value: value to search for
 * Return: -1 if value is not present || is NULL
 */
int binary_search(int *array, size_t size, int value)
{
	size_t left_idx = 0, mid, right_idx = size - 1, i;

	if (array == NULL)
		return (-1);
	while (left_idx <= right_idx)
	{
		mid = (left_idx + right_idx) / 2;

		printf("Searching in array: ");
		for (i = left_idx; i <= right_idx; i++)
		{
			printf("%d", array[i]);
			if (i < right_idx)
				printf(", ");
		}
		printf("\n");

		if (array[mid] == value)
		{
			return (mid);
		} else if (array[mid] < value)
		{
			left_idx = mid + 1;
		} else
		{
			right_idx = mid - 1;
		}
	}

	return (-1);
}
