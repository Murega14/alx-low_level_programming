#include "lists.h"

/**
 * add_nodeint - adds a node at the beginning of a list
 * @head: start of node
 * @n: new node
 * Return: linked list
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	new_node = *head;
	*head = malloc(sizeof(listint_t));
	if (!*head)
		return (NULL);
	(*head)->n = n;
	(*head)->next = new_node;
	return (*head);
}
