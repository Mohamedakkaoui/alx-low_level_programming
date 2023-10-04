#include "main.h"
#include <stdlib.h>

/**
 * str_concat - function tat concatenates 2 strings
 *
 *@s1 : pointer to the first string
 *@s2 : pointer to te second string
 *
 * Return: Always 0.
 */
char *str_concat(char *s1, char *s2)
{
	char *a;
	unsigned int i, j, b, k;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i] != '\0'; i++)
	{
		;
	}
	for (j = 0; s2[j] != '\0'; j++)
	{
		;
	}
	a = (char *)malloc((i + j + 1) * (sizeof(char)));
	if (a == NULL)
	{
		return (NULL);
	}
	for (k = 0; k < i; k++)
	{
		a[k] = s1[k];
	}
	for (b = 0; b <= j; b++)
	{
		a[b + i] = s2[b];
		k++;
	}
	a[i + j] = '\0';
	return (a);
}
