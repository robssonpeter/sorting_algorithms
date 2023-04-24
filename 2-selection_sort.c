#include "sort.h"
#include <stdio.h>
/*
 * print_list - the function that prints the linked list
 * @list: pointer to a list to be printed
 * Return: void
 * Description: thefunction to print a linked list
 */
/*
void print_list(listint_t *list)
{
	printf("how is it going");
	while(list != NULL)
	{
		printf("%d", list->n);
		if(list->next != NULL)
		{
			printf(", ");
		}
		else
		{
			printf("\n");
		}
		list = list->next;
	}
}*/

/*
 * insertion_sort_list - the function
 * @list: the liste to be sorted
 * Description: the function that sorts a linked list using insertion
 * Return: void
 */
void insertion_sort_list(listint_t **list)
{
	if (list == NULL || *list == NULL || (*list)->next == NULL)
		return;

	listint_t *current = (*list)->next;

	while (current != NULL)
	{
		listint_t *insertion_point = current->prev;

		while (insertion_point != NULL && insertion_point->n > current->n)
		{
			/* Swap the two nodes */
			insertion_point->next = current->next;
			if (current->next != NULL)
				current->next->prev = insertion_point;

			current->prev = insertion_point->prev;
			current->next = insertion_point;

			if (insertion_point->prev != NULL)
				insertion_point->prev->next = current;
			insertion_point->prev = current;

			insertion_point = current->prev;

			/* Print the list after each swap */
			print_list(*list);
		}

		current = current->next;
	}
}
