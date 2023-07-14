#include "variadic_functions.h"
#include<stdio.h>
#include<stdarg.h>

void
print_all(const char * const format, ...)
{

	int i = 0, a, c;
	double b;
	char *d;
	va_list list;

	va_start(list, format);

	while (format != NULL && format[i])
	{
		switch (format[i])
		{
			case 'c':
				a = va_arg(list, int);
				print_c(a);
				break;
			case 'f':
				b = va_arg(list, double);
				print_f(b);
				break;
			case 'i':
				c = va_arg(list, int);
				 print_i(c);
				break;
			case 's':
				 d = va_arg(list, char *);
				 print_s(d);
				break;
		}
		if (format[i] != '\0' &&
				(format[i] == 'c' || format[i] == 'f' ||
				 format[i] == 'i' || format[i] == 's'))
		{
			if (format[i + 1] != '\0')
				printf(", ");
		}
		i++;
	}
	va_end(list);
	printf("\n");
}
void
print_c(char a)
{
	printf("%c", a);
}
void
print_i(int a)
{
	printf("%d", a);
}
void
print_f(float a)
{
	printf("%f", a);
}
void
print_s(char *a)
{
	printf("%s", (a != NULL) ? a : "(nil)");
}
