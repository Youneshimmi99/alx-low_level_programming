#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_list - Prints elements of linked list
 * @head: Pointer to the head of the list
 * Return: Count number
**/

size_t print_list(const list_t *head)
{
	size_t count = 0;

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
