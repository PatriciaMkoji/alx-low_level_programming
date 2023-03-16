#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked -  a function that allocates memory using malloc
 * @b: unsigned int used
 * Return: a pointer to the allocated memory, 98 if it fails
 */
void *malloc_checked(unsigned int b)
{

	void *memory = malloc(b);

	if (memory == NULL)
		exit(98);

	return (memory);
}
