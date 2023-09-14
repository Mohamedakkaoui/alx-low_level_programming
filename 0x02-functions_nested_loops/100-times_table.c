#include "main.h"

/**
 * print_times_table - function that prints the n times table
 * @n : the number of the table
 * Return: Always 0.
 */
void print_times_table(int n)
{
	int i, a, x;

	if (n > 15 || n < 0)
		return;
	for (i = 0; i <= n; i++)
	{
		for (x = 0; x <= n; x++)
		{
			a = x * i;
			if (a > 99)
			{
				_putchar ((a / 100) + '0');
				_putchar ((a / 10) % 10 + '0');
				_putchar ((a % 10) + '0');
			}
			else if (a > 9)
			{
				_putchar (' ');
				_putchar ((a / 10) + '0');
				_putchar ((a % 10) + '0');
			}
			else if (a < 10 && x != 0)
			{
				_putchar (' ');
				_putchar (' ');
				_putchar (a + '0');
			}
			else
			{
				_putchar ('0' + a);
			}
			if (x != n)
			{
				_putchar (',');
				_putchar (' ');
			}
		}
		_putchar ('\n');
	}
}
