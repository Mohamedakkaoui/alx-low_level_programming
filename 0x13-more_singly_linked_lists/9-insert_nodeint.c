#include "lists.h"
/**
 * insert_nodeint_at_index - function that inserts a new node
 *@head : a node
 *@idx : index of the list where we add the node
 *@n : data
 *Return: adress of the new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *temp, *h;

	h = *head;

	if (idx != 0)
	{
		for (i = 0; i < (idx - 1) && h != NULL; i++)
		{
			h = h->next;
		}
	}
	if (h == NULL && idx != 0)
	{
		return (NULL);
	}
	temp = malloc(sizeof(listint_t));
	if (temp == NULL)
	{
		return (NULL);
	}
	temp->n = n;

	if (idx == 0)
	{
		temp->next = *head;
		*head = temp;
	}
	else
	{
		temp->next = h->next;
		h->next = temp;
	}
	return (temp);
}
