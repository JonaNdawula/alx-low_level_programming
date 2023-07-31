#include "lists.h"
/**
 * reverse_listint - a function that reverses a listint_t linked list.
 *
 *@head: pointer to first node in list
 *
 *Return: pointer to first node in list
 *
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev_node = NULL;
	listint_t *next = NULL;


	for (; *head;)
	{
		next = (*head)->next;
		(*head)->next = prev_node;
		prev_node = *head;
		*head = next;
	}
	*head = prev_node;

	return (*head);

}
