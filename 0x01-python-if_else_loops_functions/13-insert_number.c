#include "lists.h"

/**
 * insert_node - A function to insert a number to a linked list
 * @head: A pointer to the head of the list
 * @number: Number to be inserted
 * Return: A pointer to the node
 */
listint_t *insert_node(listint_t **head, int number)
{
	listint_t *node = *head, *ptr;

	ptr = malloc(sizeof(listint_t));
	if (ptr == NULL)
		return (NULL);
	ptr->n = number;
	if (node == NULL || node->n == number)
	{
		ptr->next = node;
		*head = ptr;
		return (ptr);
	}
	while (node && node->next && node->next->n < number)
		node = node->next;
	ptr->next = node->next;
	node->next = ptr;

	return (ptr);
}
