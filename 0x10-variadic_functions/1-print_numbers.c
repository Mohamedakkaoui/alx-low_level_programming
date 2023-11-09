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
	unsigned int x = n;

	va_list print;

	if (!n)
	{
		printf("\n");
		return;
	}
	va_start(print, n);

	while (x--)
	{
	printf("%d%s", va_arg(print, int), x ? (separator ? separator : "") : ("\n"));
	}
	va_end(print);
}
