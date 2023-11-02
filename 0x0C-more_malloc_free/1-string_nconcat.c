#include <stdio.h>
#include <stdlib.h>
/**
 * *string_nconcat - function that concatenates 2 strings
 *
 * @s1 : first string
 * @s2 : second string
 * @n : length er desire for s2
 *
 *Return: Always 0.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j, x, y;
	char *string;
	if (s1  == NULL)
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
	if (n >= j)
	{
		n = j;
	}
	string = (char *)malloc(sizeof(char) * (i + n + 1));
	if (string == NULL)
	{
		return (NULL);
	}
	for (x = 0; x < i; x++)
	{
		string[x] = s1[x];
	}
	if (n >= j)
	{
		for (y = 0; y < j + 1; y++)
		{
			string[x + y] = s2[y];
		}
	}
	else
	{
		for (y = 0; y <= n; y++)
		{
			string[x + y] = s2[y];
		}
	}
	return (string);
}
