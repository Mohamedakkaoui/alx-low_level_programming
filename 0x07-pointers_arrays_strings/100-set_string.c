#include "main.h"

/**
 * set_string - function that sets te value of a pointer to a char
 *
 * @s: pointer to a pointer
 * @to: pointer char
 *
 * Return : Always 0 (Success)
 */

void set_string(char **s, char *to)
{
	*s = to;
}
