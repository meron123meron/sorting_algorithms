#include "sort.h"
/**
 * insertion_sort_list - sorts a doubly linked list of integers in
 * ascending order using the Insertion sort algorithm
 * @list: is the linked list
 * Return: Nothing
 */
void insertion_sort_list(listint_t **list)
{
listint_t *t;
t = *list;
while (p->next != NULL)
{
if (list->n > list->next->n)
{
switchs = list->n;
list->n = list->next->n;
list->next->n = switchs;
if (list->previos->n > list->n)
{
switchs = list->previos->n;
list->previos->n = list->n;
list->n = switchs;
}
print_list(list);
}
}
}
