#include "main.h"
/**
 * _strspn -  gets the length of a prefix substring
 * @s: prefix poiner
 * @accept: main pointer
 * Return: prefix value
 */
unsigned int _strspn(char *s, char *accept)
{
	int i;
	int j;
	unsigned int len = 0;

	for (i = 0; i != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				len++;
				break;
			}
		}
		if (accept[j] == '\0')
		{
			return (len);
		}
	}
	return (len);
}
