#include "lists.h"

/**
 * listint_len -  a function that prints the length of a linked list
 * @h: a structure to go through
 * Return: amount of elements
 */

size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
