#include "main.h"

/**
 * _strlen_recursion - function that returns te length of a string
 *
 * @s : pointer to a string
 *
 * Return: Always 0.
 */
int _strlen_recursion(char *s)
{
	int i;

	i = 0;

	if (*s == '\0')
	{
		return (0);
	}
	else
	{
		++i;

		return (i + _strlen_recursion(s + 1));
	}
}
