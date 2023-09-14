#include "main.h"

/**
 * more_numbers - prints 10 times the number from 0 to 14
 *
 * Return: Always 0.
 */
void more_numbers(void)
{
	int i ;
	int j = 0;

	for (i = 0; i < 10; i++)
	{
		while (j <= 14)
		{
			if (j > 9)
			{
				_putchar ('0' + (j / 10));
			}
			_putchar ('0' + (j % 10));
			j++;
		}
	_putchar ('\n');
	}
}
