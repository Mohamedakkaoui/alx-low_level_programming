#include "lists.h"
/**
 * get_nodeint_at_index - eturns te nth node of a list
 *@head : node
 *@index : index of the node starting at 0
 *Return: nth node of a list
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;

	for (i = 0; i < index && head != NULL; i++)
	{
		head = head->next;
	}
	return (head);
}
