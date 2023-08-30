#include "list.h"

/**
 * print_listint - prints all the element of the linked list int he code
 * @h: linked list of type listint_t to print in this code
 * Return: number of nodes in the code
 * lahai
 */
size_t print_listint(const listint_t *h)
{
	size_t num = 0;

	while (h)
	{
		printf("%d\n", h->n);
		num++;
		h = h->next;
	}

	return (num);
}

