/**
 * flip_bits - will return number of bits needed to flip
 * @n: ffirst number to be flipped
 * @m: second number to be flipped
 * Return: number of needed to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int flipcount = 0;
	unsigned long int xor = (n ^ m);

	while (xor)
	{
		flipcount++;
		xor &= (xor - 1);
	}
	return (flipcount);
}
