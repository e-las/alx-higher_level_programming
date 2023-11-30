#include <stdlib.h>
#include "lists.h"
#include <stdio.h>

/**
 * check_cycle - program check singly linked list has a cycle
 * @list: singly linked list
 * Return: if exist a cycle - 1, otherwise - 0
 */
int check_cycle(listint_t *list)
{
	listint_t *slow = list->next;
	listint_t *fast = list->next->next;

	if (list == NULL || list->next == NULL)
	       return (0);
	while (slow && fast && fast->next)
	{
		if (slow == fast)
			return (1);
		slow = slow->next;
		fast = fast->next->next;
	}

	return (0);
}	
