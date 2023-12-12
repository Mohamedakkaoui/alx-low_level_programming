#include "lists.h"
/**
 * free_listint - function that frees a listint_t list
 * @head : a node
 *Return: nothing.
 */
void free_listint(listint_t *head)
{
	listint_t *node;

	for (; (node = head) != NULL;)
	{
		head = head->next;
		free(node);
	}
}
