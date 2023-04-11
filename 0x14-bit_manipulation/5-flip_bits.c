#include "main.h"
/**
 * flip_bits - returns the number of bits you would need to flip
 * @n: length
 * @m: Length
 * Return: number of bits you would need to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int numb;
	unsigned long int bit_dif;

	numb = 0;
	bit_dif = n ^ m;
	while (bit_dif != 0)
	{
		if (bit_dif & 1)
		{
			numb++;
		}
		bit_dif >>= 1;
	}
	return (numb);
}
