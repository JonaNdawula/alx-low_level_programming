#include "lists.h"
/**
 *find_listint_loop -  a function that finds the loop in a linked list.
 *@head: linked list to search
 *
 *Return: an address of the node where the loop starts, 
 * 
 */
listint_t *find_listint_loop(listint_t *head)
{

       listint_t *fast = head;
       listint_t *slow = head;

       if (head == NULL)
       {
       return (NULL);
       }

	for (; slow && fast && fast->next;)
	{
		slow = slow->next;
		fast = fast->next->next;
		if (fast == slow)
	{			
		for (; slow != fast;)
		{
			slow = slow->next;
			fast = fast->next;
		
		}

		return (fast);
	
	}

   }
	return (NULL);

}
