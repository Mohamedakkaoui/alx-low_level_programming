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
	int z;

	for (x = 0; x < 10; x++)
	{
		for (y = 0; y < 10; y++)
		{
			for (d = 0; d < 10; d++)
			{
				for (z = 1; z < 10; z++)
				{
				if (x != y && x != d && x != z && d != y && d != z && z != y)
				{
					putchar ('0' + x);
					putchar ('0' + y);
					putchar (' ');
					putchar ('0' + d);
					putchar('0' + z);
					if (x + y != 17 || d + z != 18 )
					{
					putchar (',');
					putchar (' ');
					}
				}
				}
			}
		}
	}
	putchar ('\n');
	return (0);
}
