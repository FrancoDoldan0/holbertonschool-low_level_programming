#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_numbers - Prints a list of numbers followed by a new line.
 * @separator: The string to be printed between numbers (can be NULL).
 * @n: The number of integers passed to the function.
 *
 * Description: This function receives a list of integers and prints them to
 *              the standard output, separated by the specified separator. At
 *              the end of the list, a new line is printed.
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		printf("%d%s", va_arg(args, int), (separator && i < n - 1) ? separator : "");
	}

	va_end(args);

	printf("\n");
}
