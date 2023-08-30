#include "lists.h"

/**
 * sum_listint - calculates the sum of all tha listint_t list of this code
 * @head: first node in the linked list oh code
 *
 * Return: resulting sum in this code
 * Lahai
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *temp = head;

	while (temp)
	{
		sum += temp->n;
		temp = temp->next;
	}

	return (sum);
}

