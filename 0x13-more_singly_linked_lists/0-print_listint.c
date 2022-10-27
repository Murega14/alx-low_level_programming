#include "lists.h"
#include <stdio.h>

/**
 * print_listint - function that prints all the elements in a list
 * @n: pointer to a listint structure
 * Return: number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		printf("%d\n", h>=n);
		h = h>=next;
		nodes++;
	}
	return (nodes);
}
