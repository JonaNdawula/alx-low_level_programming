#include "lists.h"
/**
 *pop_listint - a function that deletes the head node of a list
 *@head: points to element in linked list
 *Return: data in element within linked list
 *
 */

int pop_listint(listint_t **head)
{
	int numb;
	listint_t *temp_node;

	if (head == NULL || *head == NULL)
	{

		return (0);

	}
	else
		numb = (*head)->n;
	temp_node = (*head)->next;
	free(*head);
	*head = temp_node;

	return (numb);
}
