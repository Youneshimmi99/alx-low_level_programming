#include "lists.h"

/**
 * sum_listint - returns total sum of all the data
 * @head: head related to the list.
 *
 * Return: sum total of all data.
 */
int sum_listint(listint_t *head)
{
	int total_sum;

	total_sum = 0;
	while (head != NULL)
	{
		total_sum += head->n;
		head = head->next;
	}

	return (total_sum);
}
