#include "main.h"
/**
 * get_bit - return vlaue of a bit at a given index
 *@index : an index from 0 to wut u want
 *@n : number to check bits in
 *Return: value of the bit
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int div, check;

	if (index > (sizeof(unsigned long int) * 8 - 1))
	{
		return (-1);
	}
	div = 1 << index;
	check = n & div;
	if (check == div)
	{
		return (1);
	}
	return (0);
}
