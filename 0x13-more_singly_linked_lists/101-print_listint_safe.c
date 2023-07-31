#include "lists.h"
/**
 *print_listint_safe - prints list safely
 *@head: points to head of list
 *
 *Return:number of nodes
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t nods, index = 0;

	nods = loop_length(head);

	if (nods == 0)
	{
		while (head != NULL)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
			nods++;
		}
	}
	else
	{
		while (index < nods)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
			index++;
		}
		printf("-> [%p] %d\n", (void *)head, head->n);
	}
	return (nods);

}


/**
 *loop_length - counts unique nodes
 *@head: pointer to head of list
 *
 *Return: 0
 */


size_t loop_length(const listint_t *head)
{

	const listint_t *slow, *fast;

	size_t nods = 1;

	if (head == NULL || head->next == NULL)
		return (0);

	slow = head->next;
	fast = (head->next)->next;


	for (; fast; nods++)
	{
		if (slow == fast)
		{
			slow = head;
			for (; slow != fast; nods++)
				slow = slow->next;
			fast = fast->next;

			slow = slow->next;
			for (; slow != fast; nods++)
				slow = slow->next;

			return (nods);
		}
		slow = slow->next;
		fast = (fast->next)->next;
	}
	return (0);
}
