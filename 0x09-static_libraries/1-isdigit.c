#include "main.h"

/**
 * _isdigit - function that checks fora digit
 *
 * @c : integer to hcekc for a digit
 *
 * Return: Always 0.
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
