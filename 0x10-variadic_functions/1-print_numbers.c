#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_numbers - a function that prints numbers, followed by a new line
 * @separator: the string tobe printed between numbers
 * @n:number of integers passed to the function
 * @..: variable number of numbers to be printed
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list list;

	if (separator == NULL)
		return;

	va_start(list, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(list, int));

		if (i!= (n - 1) && separator != NULL)

		printf("%s", separator);
	}
	printf("\n");

	va_end(list);
}
