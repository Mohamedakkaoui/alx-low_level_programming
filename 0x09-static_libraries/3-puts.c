#include "main.h"

/**
 * _puts - function that prints a string
 *
 * @str : charcater for a string
 *
 * Return: Always 0.
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar (*str);

		str++;
	}
	_putchar ('\n');
}
