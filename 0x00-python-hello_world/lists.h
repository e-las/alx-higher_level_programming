#ifndef LISTS_H
#define LISTS_H

#include <stdio.h>

/**
 *struct listint_t - singly linked list
 *@k: integer
 *@next: pointer to the next node
 *
 */
typedef struct listint_t
{
	int k;
	struct listint_t *next;
}
listint_t;

size_t print_listint(const listint_t *h);
listint_t *add_nodeint(listint_t **head, const int k);
void free_listint(listint_t *head);
int check_cycle(listint_t *list);

#endif
