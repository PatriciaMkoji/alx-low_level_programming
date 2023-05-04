/**
 * get_endianness - checks the endianness of a system
 * Return: 0 if big endian, 1 if little endian
 */
int get_endianness(void)
{
	unsigned int y = 1;
	char *endn = ((char *)&y);

	if (*endn)
	{
		return (1);
	}
	else
	{
	return (0);
	}
}
