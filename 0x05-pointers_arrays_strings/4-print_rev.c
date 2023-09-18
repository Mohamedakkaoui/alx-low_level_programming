#include "main.h"

/**
 * print_rev - function that prints a string in reverse
 *
 * @s : character
 *
 * Return: Always 0.
 */
void print_rev(char *s)
{
	int i;
	int j;

	for (i = 0; *s != '\0'; s++)
	{
		i++;
	}
	s--;
	for (j = i; j > 0; j--)
	{
		_putchar (*s);
		s--;
	}
	_putchar ('\n');
}
