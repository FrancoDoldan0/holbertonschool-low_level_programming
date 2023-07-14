#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

void
print_all(const char * const format, ...)
{
    va_list args;
    unsigned int i = 0;
    char *str;
    int num;
    char ch;
    float f;
    int is_valid_format = 1;

    va_start(args, format);

    while (format && format[i])
    {
        is_valid_format = 1;

        if (format[i] == 'c')
        {
            ch = va_arg(args, int);
            printf("%c", ch);
        }
        else if (format[i] == 'i')
        {
            num = va_arg(args, int);
            printf("%d", num);
        }
        else if (format[i] == 'f')
        {
            f = va_arg(args, double);
            printf("%f", f);
        }
        else if (format[i] == 's')
        {
            str = va_arg(args, char *);
            if (str != NULL)
                printf("%s", str);
            else
                printf("(nil)");
        }
        else
        {
            is_valid_format = 0;
        }

        if (format[i + 1] != '\0' && is_valid_format)
            printf(", ");

        i++;
    }

    va_end(args);

    printf("\n");
}
