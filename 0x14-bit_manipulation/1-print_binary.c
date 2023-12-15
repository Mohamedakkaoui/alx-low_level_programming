#include "main.h"
/**
 * topow - calculates n ^ power
 *@n : base of the exponent
 *@power : power of the eponent
 *Return: powe of the exponent
 */
unsigned long int topow(unsigned int n, unsigned int power)
{
	unsigned long int number;
	unsigned int i;

	number = 1;
	for (i = 1; i <= power; i++)
	{
		number *= n;
	}
	return (number);
}
/**
 * print_binary - prints a binary representation of a num
 *@n : number to print
 *Return: nothing.
 */
void print_binary(unsigned long int n)
{
	unsigned long int div, a;
	char c;

	c = 0;
	div = topow(2, sizeof(unsigned long int) * 8 - 1);
	while (div != 0)
	{
		a = n & div;
		if (a == div)
		{
			c = 1;
			_putchar('1');
		}
		else if (c == 1 || div == 1)
		{
			_putchar('0');
		}
		div >>= 1;
	}
}
