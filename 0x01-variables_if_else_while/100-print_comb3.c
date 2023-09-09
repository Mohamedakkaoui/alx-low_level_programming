#include <stdio.h>

/**
 * main - Prints all possible different combo of 2 digits
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int x;
	int y;


	for (x = 0; x < 10; x++)
	{
		for (y = 1; y < 10; y++)
		{
			if (x != y && x < y)
			{
			putchar ('0' + x);
			putchar ('0' + y);
			if (x + y != 17)
			{
			putchar (',');
			putchar (' ');
			}
			}
		}
	}
	putchar ('\n');
	return (0);
}
