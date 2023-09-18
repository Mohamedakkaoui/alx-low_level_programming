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

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}


	j = i - 1;

	i = 0;
	while (i < j)
	{
		d = s[j];
		s[j] = s[i];
		s[i] = d;
		i++;
		j--;
	}
}
