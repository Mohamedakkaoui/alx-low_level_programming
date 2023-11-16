#include "main.h"
/**
 * helper_prime - helps to look for prime number
 * @n : integer
 * @x : integer
 *Return: returns prime number
 */
int helper_prime(int n, int x)
{
	if (n <= 1)
	{
		return (0);
	}
	if (x == 1)
	{
		return (1);
	}
	if (n % x == 0)
	{
		return (0);
	}
	return (helper_prime(n, x - 1));
}
/**
 * is_prime_number - returns 1 if the input integer is a pn
 * @n : integer
 *Return: returns 1
 */
int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	else
	{
		return (helper_prime(n, n - 1));
	}
}
