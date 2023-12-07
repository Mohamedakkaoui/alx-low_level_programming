#include "lists.h"
#include <stdio.h>
/**
 * print_list - function that prints all the element of a list_t
 * @h : pointer to struct counts as a head
 *Return: nuber of nodes
 */
size_t print_list(const list_t *h)
{
	int i;

	for (i = 0; h != NULL; i++)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%d] %s\n", h->len, h->str);
		}
		h = h->next;
	}
	return (i);
}
