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

	for (i = 0; i < 10; i++)
	{
		for (x = 0; x < 10; x++)
		{
			a = x * i;

			if (x == 0)
			{
				_putchar('0' + a);
			}

			if (a < 10 && x != 0)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(a + '0');
			}
			else if (a >= 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar((a / 10) + '0');
				_putchar((a % 10) + '0');
			}
		}
		_putchar('\n');
	}

}
