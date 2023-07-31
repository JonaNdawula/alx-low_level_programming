#include "lists.h"
/**
 *sum_listint - eturns the sum of all the data (n) of a listint_t linked list.
 *@head: first node in linked list
 *
 *Return: sum of data
 *
 */
int sum_listint(listint_t *head)
{
	listint_t *temp_node = head;
	int sum_of_data = 0;

	for (temp_node = head; temp_node != NULL; temp_node = temp_node->next)
	{
		sum_of_data += temp_node->n;
	}

	return (sum_of_data);

}
