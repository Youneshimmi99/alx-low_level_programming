#include "lists.h"

/**
 * add_node_end - add new node at the end of list
 * @head: pointer to the head of the list
 * @str: string to be added as the content of the new node
 * Return: a pointer to the head of the list
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newElem, *tmp;
	size_t nchar;

	newElem = malloc(sizeof(list_t));
	if (newElem == NULL)
		return (NULL);

	newElem->str = strdup(str);

	for (nchar = 0; str[nchar]; nchar++)
		;

	newElem->len = nchar;
	newElem->next = NULL;
	tmp = *head;

	if (tmp == NULL)
	{
		*head = newElem;
	}
	else
	{
		while (tmp->next != NULL)
			tmp = tmp->next;
		tmp->next = newElem;
	}

	return (*head);
}
