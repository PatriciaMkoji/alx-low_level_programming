#include "main.h"
#include <stdio.h>
#include <time.h>
/**
 * get_endianness - checks the endianness
 * Return: 0 if big endian, 1 if little endian
 */
int get_endianness(void)
{
	char *endian;
	int z;

	endian = (char *) &z;
	z = 1;
	return ((int) *endian);
}
