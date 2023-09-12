#include "main.h"

/**
 * times_table - function that prints the 9 times table
 *
 *
 * Return: Always 0.
 */
void times_table(void)
{
	int i;
	int x;
	int a;

	for (i = 0; i <= 9; i++)
	{
			for (x = 0; x <= 9; x++)
			{
				_putchar (',');
				_putchar (' ');

				a = x * i;

				if (a <= 9)
					_putchar (' ');
				else
					_putchar ((a / 10) + '0');
				_putchar ((a % 10) + '0');
			}
		_putchar ('\n');
	}
}
