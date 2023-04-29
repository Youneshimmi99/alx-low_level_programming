#include <stdio.h>
#include "lists.h"

/**
 * free_list - frees a linked list
 * @head: pointer to the head of the list
 * Return: Nothing
 */
void free_list(list_t *head)
{
list_t *tmp;

	tmp = head;
	while (tmp != NULL)
	{
		free(tmp->str);
		free(tmp);
		tmp = tmp->next;
	}
}
