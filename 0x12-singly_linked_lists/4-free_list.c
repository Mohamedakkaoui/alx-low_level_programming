#include "lists.h"
/**
 *free_list - function that frees a list
 *@head : head of the list
 *Return: no return.
 */
void free_list(list_t *head)
{
	list_t *node;

	for (; (node = head) != NULL;)
	{
		head = head->next;
		free(node->str);
		free(node);
	}
}
