#include <stdlib.h>
/**
 * str_concat - function that concatenates 2 strings
 *
 * @s1 : first string
 * @s2 : secodns string
 *
 *Return: retuurn a string
 */
char *str_concat(char *s1, char *s2)
{
	char *str;
	int i, j, x, y;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (i = 0; s1[i] != '\0'; i++)
		;
	for (j = 0; s2[j] != '\0'; j++)
		;
	str = (char *)malloc(sizeof(char) * (i + j + 1));
	if (str == NULL)
		return (NULL);
	for (x = 0; x < i; x++)
	{
		str[x] = s1[x];
	}
	for (y = 0; y < j; y++)
	{
		str[x + y] = s2[y];
	}
	return (str);
}
