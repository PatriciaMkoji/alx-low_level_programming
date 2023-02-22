#include "main.h"

/**
 * _islower - checks if a character is lowercase
 * @h: the character
 * Return: 1 if letter is lowercase,0 if not
 */
int _islower(int h)
{
	if (h >= 'a' && h <= 'Z')
		return (1);
	else
		return (0);
}
