#include "main.h"

/**
 * print_alphabet_x10 - pins alphabets in lowercase 10 times
 *
 * Return: Always 0.
 */
void print_alphabet_x10(void)
{
	char x;
	int i;

	for (i = 1; i <= 10; i++)
	{
		for (x = 'a'; x <= 'z'; x++)
		{
			_putchar (x);
		}
	_putchar ('\n');
	}
}
