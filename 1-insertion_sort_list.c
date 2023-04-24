#include "sort.h"
#include <stdio.h>

void insertion_sort_list(listint_t **list)
{
	listint_t *ls = *(list);

	while(ls->n){
		printf("%d\n", ls->n);
		ls = ls->next;
	}
}
