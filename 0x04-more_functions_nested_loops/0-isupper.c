#include "main.h"
#include <stdio.h>
#include <ctype.h>

/**
 * _isupper - to check if uppercase
 * @c: input
 * Return: 1 if uppercase / 0 if not
 */

int _isupper(int c)
{
	if ((c >= 'A') && (c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
	return (0);
}
