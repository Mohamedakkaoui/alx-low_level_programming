#include <stdio.h>

/**
 * main - Prints all possible different combo of 3 digits
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int x;
	int y;
	int d;

	for (x = 0; x < 10; x++)
	{
		for (y = 1; y < 10; y++)
		{
			for (d = 2; d < 10; d++)
			{
			if (x != y && x != d && y != d && x < y && y < d)
			{
			putchar ('0' + x);
			putchar ('0' + y);
			putchar ('0' + d);
			if (x + y + d != 24)
			{
			putchar (',');
			putchar (' ');
			}
			}
			}
		}
	}
	putchar ('\n');
	return (0);
}
