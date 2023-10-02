#include <stdio.h>

/**
 * main - function that prints all arguments it receives
 *
 * @argc : an integer
 * @argv : a pointer to a string
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int i = 0;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
