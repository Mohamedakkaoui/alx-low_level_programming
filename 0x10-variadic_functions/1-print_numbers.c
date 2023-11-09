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

	for (i = 0; i < n; i++)
	{
		if (!(i == (n - 1)))
		{
			x = va_arg(print, unsigned int);
			printf("%d", x);
			if (separator != NULL)
			{
				printf("%s", separator);
			}
		}
		else
		{
			printf("%d\n", x);
		}
	}
	va_end(print);
}
