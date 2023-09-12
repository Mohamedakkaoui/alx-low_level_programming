#include "main.h"

/**
 * print_last_digit - function that prints the last digit of a number
 *
 *@c : integer that has the number of a digit
 *
 * Return: Always 0.
 */
int print_last_digit(int c)
{

	int x;

	x = c % 10;
	if (x >= 0)
	{
		_putchar ('0' + x);
	}
	else
	{
		 x = (-1) * x;
		 _putchar ('0' + x);
	}
	return (x);
}
