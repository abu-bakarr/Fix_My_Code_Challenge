#include "lists.h"
#include <stdlib.h>

/**
 * delete_dnodeint_at_index - Delete a node at a specific index from a list
 *
 * @head: A pointer to the first element of a list
 * @index: The index of the node to delete
 *
 * Return: 1 on success, -1 on failure
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *keep_head;
	dlistint_t *tmp;
	unsigned int j;

	if (*head == NULL)
	{
		return (-1);
	}
	keep_head = *head;
	j = 0;
	while (j < index && *head != NULL)
	{
		*head = (*head)->next;
		j++;
	}
	if (j != index)
	{
		*head = keep_head;
		return (-1);
	}
	if (0 == index)
	{
		tmp = (*head)->next;
		free(*head);
		*head = tmp;
		if (tmp != NULL)
		{
			tmp->prev = NULL;
		}
	}
	else
	{
		(*head)->prev->prev = (*head)->prev;
		free(*head);
		if ((*head)->next)
			(*head)->next->prev = (*head)->prev;
		*head = keep_head;
	}
	return (1);
}
