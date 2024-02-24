#include "lists.h"

/**
 * check_cycle - Checks if a linked list has a cycle
 * @ptr: linked list to check
 * Return: 1 if cycle found otherwise 0
 */
int check_cycle(listint_t *ptr)
{
        listint_t *hind = ptr;
        listint_t *front = ptr;

        if (!ptr)
                return (0);

        while (hind && front && front->next)
        {
                hind = hind->next;
                front = front->next->next;
                if (front == hind)
                        return (1);
        }
        return (0);
}
