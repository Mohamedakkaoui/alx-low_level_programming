#include <stdio.h>

/**
 * main - prints the program name
 *
 * @argc : an int
 * @argv : pointer to a string
 *
 * Return: Always 0.
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
