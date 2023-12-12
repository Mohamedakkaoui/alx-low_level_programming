#include "lists.h"
/**
 * add_nodeint_end - ads a ne node at the end
 *@head : node
 *@n : data
 *Return: adress of the new element
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *ptr, *temp;

	ptr = malloc(sizeof(listint_t));
	{
		if (ptr == NULL)
		{
			return (NULL);
		}
		ptr->n = n;
		ptr->next = NULL;
		if (*head == NULL)
		{
			*head = ptr;
		}
		else
		{
			temp = *head;
			while (temp->next != NULL)
			{
				temp = temp->next;
			}
			temp->next = ptr;
		}
	}
	return (*head);
}
