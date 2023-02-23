#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */
/**
 * positive_or_negative - Entry point
 * @i: character used
 * Return: 0 (success)
 */
/* betty style doc for function main goes there */

void positive_or_negative(int i)
{
	srand(time(0));
	i = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (i >= 0)
	{
		printf("%d is positive\n", i);
	}
	else if (i == 0)
	{
		printf("%d is zero\n", i);
	}
	else
	{
		printf("%d is negative\n", i);
	}
}
