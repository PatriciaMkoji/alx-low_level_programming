#include "main.h"
#include <string.h>
/**
 * print_rev - prints in rev
 * @s: char to be used
 * Return:crev string
 */
void print_rev(char *s)
{
	int length = strlen(s);
	
	for(int i = length - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
