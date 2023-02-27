#include "main.h"
/**
 * _puts - prints the string
 * @str: string to be printed
 * Return: nothing
 */
void _puts(char *str)
{
	while(*str)
	_putchar(*str++);
	_putchar('\n');
}
