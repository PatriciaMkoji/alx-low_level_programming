#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: pointer to string of 0 and 1 char
 * Return: the converted number
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int binint = 0;
	int i = 0;

	if (b == NULL)
	{
		return (0);
	}
	while (b[i] != '\0')
	{
		if (b[i] == '0' || b[i] == '1')
		{
			binint <<= 1;
			binint += b[i] - '0';
		}
		else
		{
			return (0);
		}
		i++;
	}
	return (binint);
}
