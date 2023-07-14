#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

void
print_all(const char * const format, ...)
{
	va_list args;
	unsigned int i = 0;
	char *str;
	int first_argument = 1;

	va_start(args, format);

	while (format && format[i])
	{
		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(args, int));
				break;
			case 'i':
				printf("%d", va_arg(args, int));
				break;
			case 'f':
				printf("%f", va_arg(args, double));
				break;
			case 's':
				str = va_arg(args, char *);
				if (str != NULL)
					printf("%s", str);
				else
					printf("(nil)");
				break;
			default:
				i++;
				continue;
		}

		if (format[i + 1] && !first_argument)
			printf(", ");

		first_argument = 0;
		i++;
	}

	va_end(args);

	printf("\n");
}
