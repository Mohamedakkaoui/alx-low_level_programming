#include  "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - function that returns te sum of all its parameters
 *
 * @n : number of arguments want to add
 *
 *Return: return sum of all arguments
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i, x, sum = 0;

	va_list list;

	va_start(list, n);

	if (n == 0)
	{
		return (0);
	}
	for (i = 0; i < n; i++)
	{
		x = va_arg(list, int);
		sum += x;
	}
	return (sum);
}
