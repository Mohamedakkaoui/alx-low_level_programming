#include "main.h"

/**
 * rev_string - function reverses a string
 *
 * @s : a string
 *
 * Return: Always 0.
 */
void rev_string(char *s)
{
	int i;
	int j;
	char d;

	for (i = 0; *s != '\0'; s++)
	{
		i++;
	}

	j = 0;

	while (j < i)
	{
		d = s[j];
		s[j] = s[i - j];
		s[i - j] = d;
		j++;
	}
	_putchar ('\n');
}
