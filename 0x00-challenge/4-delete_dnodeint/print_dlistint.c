#include <stdio.h>
#include "lists.h"

/**
 * @head: A pointer to the starting element of a list
 *
 * Return: The number of element printed
 */
size_t print_dlistint(const dlistint_t *head)
{
	size_t n;

	n = 0;
	while (head)
	{
		printf("%d\n", head->n);
		head = head->next;
		n++;
	}
	return (n);
}
