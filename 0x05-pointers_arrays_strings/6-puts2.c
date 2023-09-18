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

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	while (j < i)
	{
		_putchar (str[j]);
		j+=2;
	}
	_putchar ('\n');
}
