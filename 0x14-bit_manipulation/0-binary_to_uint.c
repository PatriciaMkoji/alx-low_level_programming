#include "main.h"
#include <string.h>

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: pointer containing binary number
 * Return: converted number or NULL
 */
unsigned int binary_to_uint(const char *b)
{
	int indx;
	int len;
	size_t cnvt;

	indx = 0;
	len = strlen(b);
	cnvt = 0;

	if (b == NULL)
	{
		return (0);
	}
	for (indx = 0; indx < len; indx++)
	{
		if (b[indx] == '0')
		{
			cnvt <<= 1;
			cnvt += 0;
		}
		else if (b[indx] == '1')
		{
			cnvt <<= 1;
			cnvt += 1;
		}
		else
		{
			return (0);
		}
	}
	return (cnvt);
}
