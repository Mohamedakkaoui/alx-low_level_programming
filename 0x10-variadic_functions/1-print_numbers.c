#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 *print_numbers -funtion that print numbers
 *
 *@separator : string to be printed between numbers
 *@n : number of parameters
 *
 *Return: doesnt return.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list print;
	unsigned int i;

	va_start(print, n);
	if (separator == NULL)
	{
		separator = "";
	}
	else
	{
		for (i = 0; i < n; i++)
		{
			if (i != (n - 1))
			{
				printf("%d%s", va_arg(print, int), separator);
			}
			else
			{
				printf("%d\n", va_arg(print, int));
			}
		}
	}
}
