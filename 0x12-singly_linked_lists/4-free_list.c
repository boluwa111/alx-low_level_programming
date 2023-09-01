#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * free_list - a function that frees linked list
 * @head: a pointer to a linked list
 */

void free_list(list_t *head)
{
	list_t *temp = head;
	list_t *cur = temp;

	while (temp != NULL)
	{
		temp = cur->next;
		free(cur->str);
		free(cur);
		cur = temp;
	}
}
