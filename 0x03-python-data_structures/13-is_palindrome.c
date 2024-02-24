#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * append_head - Function to add a node at the start of a list
 * @head: Head of listint_t
 * @n: Value of the node
 * Return: adress of the new element
 */
listint_t *append_head(listint_t **head, const int n)
{
	listint_t *ptr;

	ptr = malloc(sizeof(listint_t));
	if (!ptr)
		return (NULL);
	ptr->n = n;
	ptr->next = NULL;
	if (*head == NULL)
		*head = ptr;
	else
	{
		ptr->next = *head;
		*head = ptr;
	}
	return (ptr);
}
/**
 * is_palindrome - To check if a singly linked list is a palindrome
 * @head: Head of the singly linked list
 * Return: 0 if not a palindrome and 1 if it is
 */
int is_palindrome(listint_t **head)
{
	listint_t *ptr = *head;
	listint_t *reverse = NULL;

	if (*head == NULL || (*head)->next == NULL)
		return (1);
	while (ptr != NULL)
	{
		append_head(&reverse, ptr->n);
		ptr = ptr->next;
	}
	ptr = *head;
	while (*head)
	{
		if (ptr->n != reverse->n)
		{
			free_listint(reverse);
			return (0);
		}
		reverse = reverse->next;
		ptr = ptr->next;
	}
	free_listint(reverse);
	return (1);
}
