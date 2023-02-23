#include "main.h"
#include <stdio.h>
#include <ctype.h>
/**
 * print_number - printd numbers from 0 to 9
 * @i :charcter to be used
 * Return :print of 0 to 9
 */

void print_numbers(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		_putchar(i);
	}
	_putchar("\n");
}
