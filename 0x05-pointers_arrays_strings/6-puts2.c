#include "main.h"

/**
 * puts2 - function that prints every other charcater of a string
 *@str : pointer to a string
 * Return: Always 0.
 */
void puts2(char *str)
{
	int i;
	int j;

	for (i = 0; str[i] != '\0'; i++)
	{
		;
	}

	for (j = 0; j < i; j += 2)
	{
		_putchar (str[j]);
	}
	_putchar ('\n');
}
