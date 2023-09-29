#include "main.h"

/**
 *  is_prime_number - returns 1 if the input is a prime number
 *
 * @a : integer
 * @j : integer
 *
 * Return: Always 0.
 */
int prime_number(int a, int j);
int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	else
	{
		return (prime_number(n, n - 1));
	}

}
/**
 * prime_number - second function for recursion
 *
 * @a : integer
 * @j : integer
 *
 * Return: Always 0.
 */
int prime_number(int a, int j)
{
	if (j == 1)
	{
		return (1);
	}
	else if (a % j == 0)
	{
		return (0);
	}
	else if (a <= 1)
	{
		return (0);
	}
	return (prime_number(a, (j - 1)));
}
