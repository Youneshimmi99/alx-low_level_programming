#include "lists.h"

/**
* print_list - Prints elements of linked list.
* @head: A pointer to the head of the list.
* Return: The number of nodes in the list.
*/

size_t print_list(const list_t *head)
{
	size_t count;

	count = 0;
	while (head != NULL)
	{
		if (head->str == NULL)
			printf("[%d] %s\n", 0, "(nil)");
		else
			printf("[%d] %s\n", head->len, head->str);
		head = head->next;
		count++;
	}
	return (count);
}
