#include "main.h"

/**
 * times_table - function that prints the n times table
 *
 *
 * Return: Always 0.
 */
void times_table(void)
{
	int j;
	int i;
	int x;
	int a;
	
	if ( j > 15 || j < 0)
		return;
	for (i = 0; i <= j; i++)
	{
		for (x = 0; x <=j; x++)
		{
			a = x * i;

			if (a > 99)
			{
				_putchar ((a / 100) + '0');
				_putchar ((a/10) % 10 + '0');
				_putchar ((a % 10) + '0');
			}
			else if (a > 9)
			{
				_putchar (' ');
				_putchar ((a / 10) + '0');
				_putchar ((a % 10) + '0');
			}
			else if (a < 10 && x != 0 )
			{
				_putchar (' ');
				_putchar (' ');
				_putchar (a + '0');
			}
			else 
			{
				_putchar ('0' + a)
			}


			if (x != j)
			{
				_putchar (',');
				_putchar (' ');
			}
		}

		_putchar ('\n');
	}
}
