#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_numbers - function that prints numbers
 *
 * @separator : string to be rinted between numbers
 * @n : number of nt passed to th function
 *Return: return number printed
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i, x;

	va_list print;

	va_start(print, n);

	if (separator == NULL)
	{
		separator = "";
	}
	for (i = 0; i < n; i++)
	{
		x = va_arg(print, unsigned int);
		if (!(i == (n - 1)))
		{
			printf("%d", x);
			printf("%s", separator);
		}
		else
		{
			printf("%d\n", x);
		}
	}
	va_end(print);
}
