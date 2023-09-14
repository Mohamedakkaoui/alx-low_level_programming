#include "main.h"

/**
 * print_triangle - prints a triangle
 *
 * @size : size of the triangle
 *
 * Return: Always 0.
 */

void print_triangle(int size)
{
	int a;
	int b;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{

		for (a = 1; a <= size; a++)
		{
			for (b = a; b < size; b++)
			{
				_putchar(' ');
			}

			for (b = 1; b <= a; b++)
			{
				_putchar('#');
			}

			_putchar('\n');
		}
	}
}
