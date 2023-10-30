#include <stdio.h>
#include <stdlib.h>
/**
 * *str_concat - function that concatenates 2 strings
 *
 * @s1 : first string
 * @s2 : second string
 *
 *Return: Always 0.
 */
char *str_concat(char *s1, char *s2)
{
	char *add;
	int i, j, x, y;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	for (i = 0; s1[i] != '\0'; i++)
	{
		;
	}
	for (j = 0; s2[j] != '\0'; j++)
	{
		;
	}
	add = (char *)malloc(sizeof(char) * (i + j + 1));
	if (add == NULL)
	{
		return (NULL);
	}
	for (x = 0; x < i; x++)
	{
		add[x] = s1[x];
	}
	for (y = 0; y < j; y++)
	{
		add[x + y] = s2[y];
	}
	return (add);
}
