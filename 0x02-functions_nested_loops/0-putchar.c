#include <stdio.h>

/**
* main - prints _putchar
* Return: 0
*/

int main(void)
{
	int i;
	char function[] = "_putchar";

	for (i = 0; function[i] != '\0'; i++)
	{
		putchar(function[i]);
	}

	putchar ('\n');
	return (0);
}
