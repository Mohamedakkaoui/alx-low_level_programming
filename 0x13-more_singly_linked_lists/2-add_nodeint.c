#include "lists.h"
/**
 * add_nodeint - adds a new node at the beginning of a list
 *@head : a node
 *@n : data in struct
 *Return: adress of the new element
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *ptr = malloc(sizeof(listint_t));

	if (ptr == NULL)
	{
		return (NULL);
	}
	else
	{
		ptr->n = n;
		ptr->next = *head;
		*head = ptr;
	}
	return (*head);
}
