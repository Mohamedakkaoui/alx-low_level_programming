#include "variadic_functions.h"
#include <stdarg.h>
/**
 *sum_them_all - returns the sum of its parameters
 *
 *@n : number of parametres
 *
 *Return: return the sum of all parametre
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int result;
	va_list sum;

	result = 0;
	if (n == 0)
	{
		return (0);
	}
	va_start(sum, n);
	for (i = 0; i < n; i++)
	{
		result += va_arg(sum, int);
	}
	return (result);
}
