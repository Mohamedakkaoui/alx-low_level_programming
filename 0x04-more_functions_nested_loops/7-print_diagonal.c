#include "main.h"

/**
 * print_diagonal - function that draws a diagonal line on the terminal
 *
 * @n : number of times the charater \ should be printed
 *
 * Return: Always 0.
 */
void print_diagonal(int n)
{
	int i;
	int j;

	if (n == 0 || n < 0)
	{
		_putchar ('\n');
	}
	else
	{
		for (i = 1; i <= n; i++)
		{
			for (j = 0; j < i; j++)
			{	
				_putchar (' ');
			}
			_putchar ('\n');
		}
	}

}
