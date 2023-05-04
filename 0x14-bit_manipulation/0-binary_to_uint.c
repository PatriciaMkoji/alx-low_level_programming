#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: pointer to string of 0 and 1 char
 * Return: the converted number
 */
unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int binnum;

	binnum = 0;

	for (i = 0; b[i] != '\0'; i++)
	{
		binnum <<= 1;
		binnum += (b[i] - '0');
	}
	return (binnum);
}
