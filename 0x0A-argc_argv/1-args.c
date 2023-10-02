#include <stdio.h>

/**
 * main - prints te number of arguments
 *
 * @argc : an int
 * @argv : a pointer to a string
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", --argc);
	return (0);
}
