#include "lists.h"

/**
 * add_node - adds a new node to the beginning of a linked list
 * @head: pointer to a pointer to the head of the list
 * @str: string to be added as the content of the new node
 * Return: a pointer to the new node
 */

list_t *add_node(list_t **head, const char *str)
{
list_t *newElem;
unsigned int l = 0;

	newElem = malloc(sizeof(list_t));
	if (newElem == NULL)
	{
		free(newElem);
		return (NULL);
	}
	newElem->str = strdup(str);
	while (str[l] != '\0')
	{
		l++;
	}
	newElem->len = l;
	if (*head != NULL)
		newElem->next = *head;
	if (*head == NULL)
		newElem->next = NULL;
	*head = newElem;
	return (*head);
}
