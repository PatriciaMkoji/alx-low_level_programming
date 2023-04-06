#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index
 * @n: number used
 * @index: iterates
 * Return: value of the bit at index index or -1 if an error occured
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}
	else
	{
	return ((n >> index) & 1);
	}
}
