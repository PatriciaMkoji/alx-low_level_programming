#include "main.h"
#include <stdlib.h>
/**
 * _calloc -  a function that allocates memory for an array, using malloc
 * @nmemb: integer used
 * @size: size of bytes
 * Return: If nmemb or size is 0, then _calloc returns NULL
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *memo;
	char *ptr;
	unsigned int index;

	if (nmemb == 0 || size == 0)
		return (NULL);

	memo = malloc(size * nmemb);

	if (memo == NULL)
		return (NULL);

	ptr = memo;

	for (index = 0; index < (size * nmemb); index++)
		ptr[index] = '\0';

	return (memo);
}
