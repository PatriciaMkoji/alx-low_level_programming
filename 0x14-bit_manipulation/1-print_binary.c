#include "main.h"

/**
 * print_binary - prints the binary representation of a number
 * @n: number used
 */

void print_binary(unsigned long int n)
{
	int indx, zero;

	indx = 0;
	zero = 0;

	for (indx = (sizeof(unsigned long int) * 8) - 1; indx >= 0; indx--)
	{
		if ((n >> indx) & 1)
		{
			_putchar('1');
			zero = 1;
		}
		else if (zero)
		{
			_putchar('0');
		}
	}
	if (!zero)
	{
		_putchar('0');
	}
}
