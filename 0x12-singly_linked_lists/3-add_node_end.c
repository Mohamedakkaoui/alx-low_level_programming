#include "lists.h"
#include <string.h>
/**
 *add_node_end - adds a new node at the end of a ist
 *@head : begining of the list
 *@str : string
 *Return: returns adress of the new element
 */
list_t *add_node_end(list_t **head, const char *str)
{
	int i;

	list_t *node, *temp;

	node = malloc(sizeof(list_t));
	if (node == NULL)
	{
		return (NULL);
	}
	else
	{
		node->str = strdup(str);
		for (i = 0; str[i] != '\0'; i++)
		{
			;
		}
		node->len = i;
		node->next = NULL;
		temp = *head;
		if (temp == NULL)
		{
			*head = node;
		}
		else
		{
			while (temp->next != NULL)
			{
				temp = temp->next;
			}
		temp->next = node;
		}
	}
	return (*head);
}
