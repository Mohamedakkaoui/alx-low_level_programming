#include "lists.h"
/**
 * free_listint2 - function that frees a list
 *@head : a node
 *Return: nothing.
 */
void free_listint2(listint_t **head)
{
	listint_t *current, *nextNode;

	if (head == NULL || *head == NULL)
	{
		return;
	}

	current = *head;

	while (current != NULL)
	{
		nextNode = current->next;
		free(current);
		current = nextNode;
	}
	*head = NULL;
}
