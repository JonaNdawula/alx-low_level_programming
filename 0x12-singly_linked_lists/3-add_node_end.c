#include "lists.h"
/**
 *add_node_end - Adds new node at end of list
 *
 *@head: a double pointer to list_t
 *@str: string in new node
 *
 *Return: The address of the new element
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newNode;
	list_t *tempNode = *head;

	unsigned int length = 0;

	while (*(str + length))
		length++;

	newNode = malloc(sizeof(list_t));

	if (newNode == NULL)
	{
		return (NULL);
	}
	else
	{
		newNode->str = strdup(str);
		newNode->len = length;
		newNode->next = NULL;
	}


	if (*head == NULL)
	{
		*head = newNode;

		return (newNode);
	}

	while (tempNode->next)
	{
		tempNode = tempNode->next;
	}
	tempNode->next = newNode;

	return (newNode);
}
