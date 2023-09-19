#include "main.h"
/**
 * puts_half - a function that prints half of a string
 *
 * @str: input
 *
 * Return: Always 0.
 */
void puts_half(char *str)
{
	int i;
	int j;
	int f;

	f = 0;

	for (i = 0; str[i] != '\0'; i++)
	{
		f++;
	}

	j = (f / 2);

	if ((f % 2) == 1)
	{
		j = ((f + 1) / 2);
	}

	for (f = j; str[f] != '\0'; f++)
		_putchar(str[f]);
	_putchar('\n');
}
