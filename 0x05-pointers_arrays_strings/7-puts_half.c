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

	for (i = 0; *s != '\0'; s++)
	{
		i++;
	}

	j = (i / 2);

	if ((i % 2) == 1)
	{
		j = ((i + 1) / 2);
	}

	for (i = j; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
