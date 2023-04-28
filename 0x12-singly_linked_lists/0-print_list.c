#include "lists.h"

/**
* print_list - Prints elements of linked list.
*
* @head: A pointer to the head of the list.
*
* Return: The number of nodes in the list.
*/

size_t print_list(const list_t *head)
{
const list_t *current = head;
size_t node_count = 0;

while (current != NULL)
{
if (current->str != NULL)
printf("[%d] %s\n", current->len, current->str);
else
printf("[0] (nil)\n");
node_count += 1;
current = current->next;
}

return (node_count);
}
