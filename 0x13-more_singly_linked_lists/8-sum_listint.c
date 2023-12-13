#include "lists.h"
/**
 * sum_listint - returns the sum of all data of a list
 *@head : a node
 *Return: sum of all of all data
 */
int sum_listint(listint_t *head)
{
	int sum;

	sum = 0;
	if (head == NULL)
	{
		return (0);
	}
	else
	{
		while (head != NULL)
		{
			sum +=	head->n;
			head = head->next;
		}
		return (sum);
	}
}
