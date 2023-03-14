#include "main.h"
#include <stdlib.h>
/**
 * _create_array - creates an array of chars, and initializes it with a specific char
 * @size: size of array
 * @c: character to used
 * Return: Null if size is 0
 */
char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}

	array = malloc(size * sizeof(char));

	if (array == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		array[i] = c;
	}
	return (array);
}
