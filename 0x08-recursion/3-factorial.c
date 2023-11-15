#include "main.h"
/**
 * factorial - function that returns the factorial of a n
 * @n : number given
 *Return: factorial of a number given
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
