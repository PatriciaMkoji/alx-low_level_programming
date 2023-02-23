#include <stdio.h>
#include "main.h"
#include <stdlib.h>
#include <unistd.h>

/**
 * print_most_numbers -  prints the number 0 to 9
 * Return :01356789
 */

void print_most_numbers(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		if ((i != '2') && (i != '4'))
		{
			_putchar(i + '0');
		}
	}
}
