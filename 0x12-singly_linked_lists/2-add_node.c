#include "lists.h"
#include <string.h>
/**
 *add_node - adds a new node at the begining of a list
 *@head : head of te linked list
 *@str : string
 *Return: returns adress of the new network
 */
list_t *add_node(list_t **head, const char *str)
{
	int i;

	list_t *node;

	node = malloc(sizeof(list_t));
	if (node ==  NULL)
	{
		return (NULL);
	}
	else
	{
		node->str = strdup(str);
		i = 0;
		while (str[i] != '\0')
		{
			i++;
		}
		node->len = i;
		node->next = *head;
		*head = node;
	}
	return (*head);
}
