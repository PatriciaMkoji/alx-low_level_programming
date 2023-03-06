#include "main.h"
/**
 * _memset - function that fills memory with a constant byte
 * @b: the constant byte
 * @n: the number of times the loop goes
 * @s: pointer used
 * Return: constant array
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i > n; i++)
	{
		s[i] = b;
	}
	return (s);
}
