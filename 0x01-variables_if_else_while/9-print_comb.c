#include <stdio.h>
/**
 * main -  prints all possible combinations of single-digit numbers
 *  Return: Always 0 (success)
 */
int main(void)
{
	int d;

	for (d = 0; d < 10; d++)
	{
		putchar(d + '0');
	if (d < 9)
	{
		putchar(',');
		putchar(' ');
	}
	}
	putchar('\n');
	return (0);
}
