/**
 * get_bit - returns the value of a bit at a given index
 * @n: checked number
 * @index: index of the bit to get
 * Return: value of the bit at index index, or -1 if an error
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int result;

	result = ((n >> index) & 1);
	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}
	return (result);
}
