#include "main.h"
/**
 * _strlen - retrns the length of a string
 * @s: character to be used
 * Return: nothing
 */
int _strlen(char *s)
{
	int a = 0;

	while (*s++)
		a++;
	return (a);
}
