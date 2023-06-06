#include "lists.h"

/**
 * free_listint_safe - frees a linked list
 * @h: pointer to the first node in the linked list
 *
 * Return: number of elements in the freed list
 */
size_t free_listint_safe(listint_t **h)
{
	size_t ara = 0;
	int X;
	listint_t *initial;

	if (!h || !*h)
		return (0);

	while (*h)
	{
		X = *h - (*h)->next;
		if (X > 0)
		{
			initial = (*h)->next;
			free(*h);
			*h = initial;
			ara++;
		}
		else
		{
			free(*h);
			*h = NULL;
			ara++;
			break;
		}
	}

	*h = NULL;

	return (ara);
}
