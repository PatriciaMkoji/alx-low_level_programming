#include "main.h"
/**
 * _strcmp - compare two strings
 * @s1: string to be compared
 * @s2: string to be ompared
 * Return: result to be returned
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
