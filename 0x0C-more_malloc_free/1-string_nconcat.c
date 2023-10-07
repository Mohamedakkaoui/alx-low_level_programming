#include "main.h"
#include <stdlib.h>

/**
 *string_nconcat - function that concatenates 2 strings
 *
 * @s1 : pointer to first string
 * @s2 : pointer to second string
 * @n : number of bytes
 *
 *Return: Always 0.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char  *a;
	unsigned int d, c, i, j, b;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i] != '\0'; i++)
		;

	for (j = 0; s2[j] != '\0'; j++)
		;

	a = (char *)malloc((i + n + 1) * sizeof(char));
	if (a == NULL)
		return (NULL);

	for (b = 0; b < i; b++)
	{
		a[b] = s1[b];
	}
	if (n >= j)
	{
		for (c = 0; c <= j; c++)
		{
			a[c + b] = s2[c];
		}
	}
	else
	{
		for (d = 0; d <= n; d++)
		{
			a[d + b] = s2[d];
		}
	}
	a[i + n] = '\0';
	return (a);
}
