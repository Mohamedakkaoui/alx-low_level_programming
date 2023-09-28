#include "main.h"

/**
 * _sqrt_recursion - returns the natural square root of n
 *
 *
 * @a : integer
 * @i : integer
 *
 * Return: Always 0.
 */
int sqrt_recu(int a, int i);
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else
	{
		return (sqrt_recu(n, 0));
	}

}

/**
 * sqrt_recu - function to use recursion on
 *
 * @a : integer
 * @i : integer
 *
 * Return: Always 0.
 */
int sqrt_recu(int a, int i)
{

	if (i * i > a)
	{
		return (-1);
	}
	else if (i * i == a)
	{
		return (i);
	}
	return	(sqrt_recu(a, i + 1));
}
