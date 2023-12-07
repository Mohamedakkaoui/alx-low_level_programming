#include "lists.h"
/**
 *list_len - returns the number of elements in a linked list
 *@h : pointer to struct
 *Return: return number of elements
 */
size_t list_len(const list_t *h)
{
	int i;

	for (i = 0; h != NULL; i++)
	{
		;
		h = h->next;
	}
	return (i);
}
