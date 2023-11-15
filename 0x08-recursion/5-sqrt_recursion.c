#include "main.h"
/**
 * sqrto - function that calculates square root
 * @x : the integer
 * @i : integer
 *Return: return sqrt of n
 */
int sqrto(int x, int i)
{
	if (i * i > x)
	{
		return (-1);
	}
	else if (i * i == x)
	{
		return (i);
	}
	else
	{
		return (sqrto(x, i + 1));
	}
}
/**
 * _sqrt_recursion - calculates natural square root of a number
 * @n : integer
 *Return: returns the natural square root
 */
int _sqrt_recursion(int n)
{
	if (n <= 1)
	{
		return (n);
	}
	else
	{
		return (sqrto(n, 0));
	}
}
