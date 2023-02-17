#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int c;

	for (c = 'a'; c <= 'd'; c++)
		putchar (c);
	for (c = 'f'; c <= 'p'; c++)
		putchar (c);
	for (c = 'r'; c <= 'z'; c++)
		putchar (c);
	putchar('\n');
	return (0);
}
