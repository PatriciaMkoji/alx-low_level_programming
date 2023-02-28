#include "main.h"
/**
 * puts_half - prints half the numbers
 * @str: charcter to be printed
 * Return: half string printed
 */
void puts_half(char *str)
{
	int i = 0, j = 0, n;

	while (str[i++])
		j++;

	if ((j % 2) == 0)
		n = j / 2;

	else
		n = (j + 1) / 2;

	for (i = n; i < j; i++)
		_putchar(str[i]);

	_putchar('\n');
}
