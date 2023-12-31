#include "main.h"
/**
 * _pow_recursion - function that returns te value of pow(x, y)
 * @x : an int
 * @y : an int
 *Return: value of x raised to pow of y
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
	{
		return (1);
	}
	return (x * (_pow_recursion(x, (y - 1))));
}
