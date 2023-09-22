#include "main.h"

/**
 * *cap_string - function capitalizez all words of a string
 *
 * @a : pointer to a char
 *
 * Return: Always 0.
 */
char *cap_string(char *a)
{
	int i;

	for (i = 0; a[i]; i++)
	{
		while (!(a[i] >= 'a' && a[i] <= 'z'))
		{
			i++;
		}
		if (a[i - 1] == ' ' || a[i - 1] == '\t' || a[i - 1] == '\n' ||
				a[i - 1] == ',' || a[i - 1] == ';' || a[i - 1] == '.' ||
				a[i - 1] == '!' || a[i - 1] == '?' || a[i - 1] == '"' ||
				a[i - 1] == '(' || a[i - 1] == ')' || a[i - 1] == '{' ||
				a[i - 1] == '}')
		{
			a[i] = a[i] - 32;
		}
	}
	return (a);
}
