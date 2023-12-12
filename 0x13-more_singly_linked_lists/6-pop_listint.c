#include "lists.h"
/**
 * pop_listint - deletes the head node of a listint_t linked list
 *@head : a node
 *Return: noting.
 */
int pop_listint(listint_t **head)
{
	int i;

	if (*head == NULL)
	{
		return (0);
	}
	else
	{
		listint_t *temp;

		temp = *head;
		*head = (*head)->next;
		i = temp->n;
		free(temp);
		return (i);
	}
}
