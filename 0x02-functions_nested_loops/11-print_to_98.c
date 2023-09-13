#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - function that prints all natural numbers from n to 98
 *
 * @n : integer that reads a number
 * Return: Always 0.
 */
void print_to_98(int n)
{
	int x;

	if (n > 98)
	{
		for (x = n; x > 98; x--)
			printf("%d, ", x);
	}
	else if (n < 98)
	{
		for (x = n; x < 98; x++)
			printf("%d, ", x);
	}
	printf("98\n");
}
