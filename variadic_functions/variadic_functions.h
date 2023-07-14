#ifndef _variadic_functions_
#define _variadic_functions_

#include<stdio.h>
#include<stdarg.h>

	/*task 0*/
int sum_them_all(const unsigned int n, ...);

	/*task 1*/
void print_numbers(const char *separator, const unsigned int n, ...);

	/*task 2*/
void print_strings(const char *separator, const unsigned int n, ...);

	/*task 3*/
void print_all(const char * const format, ...);
void print_c(char a);
void print_i(int a);
void print_f(float a);
void print_s(char *a);
#endif