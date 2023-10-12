#include "lists.h"
/**
 *sum_dlistint - int sum_dlistint(dlistint_t *head)of a dlistint_t linked list
 *
 *@head: list head
 *Return: sum of all the data
 *
 */
int sum_dlistint(dlistint_t *head)
{

	int sum_of_data = 0;

	if (head != NULL)
	{

		for (; head->prev != NULL; head = head->prev)
		{
		}

		for (; head != NULL; head = head->next)
		{
			sum_of_data += head->n;
		}
	}
	return (sum_of_data);
}
