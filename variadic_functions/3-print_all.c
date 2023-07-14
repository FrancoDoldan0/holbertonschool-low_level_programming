#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

void
print_all(const char * const format, ...)
{
	va_list args;
	unsigned int i = 0;
	char *str;
	int print_separator = 0;

	va_start(args, format);

	while (format && format[i])
	{
		if (format[i] == 'c')
		{
			printf("%c", va_arg(args, int));
			print_separator = 1;
		}
		else if (format[i] == 'i')
		{
			printf("%d", va_arg(args, int));
			print_separator = 1;
		}
		else if (format[i] == 'f')
		{
			printf("%f", va_arg(args, double));
			print_separator = 1;
		}
		else if (format[i] == 's')
		{
			str = va_arg(args, char *);
			printf("%s", (str != NULL) ? str : "(nil)");
			print_separator = 1;
		}

		i++;

		if (format[i] && print_separator)
		{
			printf(", ");
			print_separator = 0;
		}
	}

	va_end(args);

	printf("\n");
}
