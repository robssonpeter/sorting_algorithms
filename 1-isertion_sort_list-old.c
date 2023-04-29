#include "sort.h"
/**
 * insertion_sort_list - sorts a doubly linked list of integers
 *                       in ascending order using Insertion sort
 *
 * @list: double pointer to the head of the list
 */
void insertion_sort_list(listint_t **list)
{
    listint_t *current, *temp;

    if (list == NULL || *list == NULL || (*list)->next == NULL)
        return;

    current = (*list)->next;
    while (current != NULL)
    {
        temp = current->prev;
        while (temp != NULL && temp->n > current->n)
        {
            temp->next = current->next;
            if (temp->prev != NULL)
                temp->prev->next = current;
            current->prev = temp->prev;
            temp->prev = current;
            current->next = temp;
            if (current->next != NULL)
                current->next->prev = temp;
            temp = current->prev;
            if (temp == NULL)
                *list = current;
            print_list(*list);
        }
        current = current->next;
    }
}
