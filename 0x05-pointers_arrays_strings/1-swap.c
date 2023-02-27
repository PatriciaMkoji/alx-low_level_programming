#include "main.h"

/**
 * swap_int - swaps integers
 * @a: int to be swapped
 * @b: int to be swapped
 * Return: Nothing
 */

void swap_int(int *a, int *b)
{
	int swp = *a;
	*a = *b;
	*b = swp;
}

