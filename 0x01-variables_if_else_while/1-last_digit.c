#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * main - Enrty point
 * Return: Always 0 (succes)
 */
int main(void)
{
	int n;
	int a;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	a = n % 10;
	/* your code goes there */
	if (n > 5)
	{
		printf("Last digit of %d is %d  and is greater than 5", n, a);
	}
	else if (n == 0)
	{
		printf("Last digit of %d is %d and is 0", n, a);
	}
	else
	{
		printf("Last digit of %d is %d and is less than 6 and not 0", n, a);
	}
	return (0);
}
