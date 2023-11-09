#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_strings - function that prints strings
 *
 * @separator : string to be printed between strings
 * @n : number of arguments
 *
 *Return: returns a string
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int x;
	char *i;


	va_list print1;

	va_start(print1, n);
	for (x = 0; x < n; x++)
	{
		i = va_arg(print1, char *);
		if (i == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", i);
		}
		if (x != (n - 1) && separator != NULL)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(print1);
}
