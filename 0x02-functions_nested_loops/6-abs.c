#include "main.h"

/**
 * _abs - function that computes the absolute value of an integer
 *
 *@c : integer that computes an integer
 *
 * Return: Always 0.
 */
int _abs(int c)
{
	if (c > 0)
	{
		return (c);
	}
	else if (c < 0)
	{
		return (-c);
	}
	else
	{
		return (0);
	}
}
