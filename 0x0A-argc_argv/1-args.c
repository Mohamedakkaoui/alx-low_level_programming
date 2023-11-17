#include <stdio.h>
/**
 * main - program that prints the number of arguments passed into it
 * @argc : number of arguments
 * @argv : array of commands
 *Return: always 0.
 */
int main(int argc, char **argv)
{
		(void)argv;
		printf ("%d\n", --argc);
		return (0);
}
