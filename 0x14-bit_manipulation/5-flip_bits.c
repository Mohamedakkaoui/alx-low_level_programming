#include "main.h"
/**
 * flip_bits - returns the number of bits to flip from one number to another
 *@n : first num
 *@m : second num
 *Return: number of bits to change
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int a, count = 0;
	unsigned long int current;
	unsigned long int i = n ^ m;

	for (a = 63; a >= 0; a--)
	{
		current = i >> a;
		if (current & 1)
		{
			count++;
		}
	}
	return (count);
}
