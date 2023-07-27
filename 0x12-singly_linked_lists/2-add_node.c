#include "lists.h"

/**
 *add_node -  a function that adds a new node at start
 *
 *@head: double pointer pointing to start of list
 * @str: string to add
 *
 * Return: address of new element
 *
 */
list_t *add_node(list_t **head, const char *str)
{

	list_t *newNode;
	unsigned int length = 0;

	while (*(str + length))
	{
		length++;
	}

	newNode = malloc(sizeof(list_t));

	if (newNode == NULL)
	{
		return (NULL);
	}
	else
	{

		newNode->str = strdup(str);
		newNode->len = length;
		newNode->next = (*head);
		(*head) = newNode;
	}


	return (*head);
}
