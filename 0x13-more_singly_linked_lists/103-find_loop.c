#include "lists.h"

/**
 * find_listint_loop - find loop in linked list.
 * @head: Pointer head of list.
 *
 * Return: Address of the node where the loop starts.
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *p;
	listint_t *pre;

	p2 = head;
	pre = head;
	while (head && p2 && p2->next)
	{
		head = head->next;
		p2 = p2->next->next;

		if (head == p2)
		{
			head = pre;
			pre =  p2;
			while (1)
			{
				p2 = pre;
				while (p2->next != head && p2->next != pre)
				{
					p2 = p2->next;
				}
				if (p2->next == head)
					break;

				head = head->next;
			}
			return (p2->next);
		}
	}

	return (NULL);
}