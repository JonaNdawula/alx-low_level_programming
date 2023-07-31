#include "lists.h"
/**
 * free_listint_safe - frees linked list
 *@h:points to first node in list
 *
 *Return: size of the list that was free’d
 *
 */
size_t free_listint_safe(listint_t **h)
{

	int subt;
	size_t length;
	list_t *temp_node;

	if (h == NULL || *h == NULL)
		return (0);

	for (length = 0; *h; length++)
	{
		subt = *h - (*h)->next;

		if (subt > 0)
		{
			temp_node = (*h)->next;
			free(*h);
			*h = temp_node;
		}
		else
		{
			free(*h);
			*h = NULL;
			break;

		}

	}

	*h = NULL;

	return (length);

}
