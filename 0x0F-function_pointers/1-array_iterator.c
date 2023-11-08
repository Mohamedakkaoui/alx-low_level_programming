#include "function_pointers.h"
/**
 * array_iterator - function dat executes a function given as aprameter
 * @array : an array
 * @size : size of the array
 * @action : a pointer funcion
 *
 *Return: no return
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
