#ifndef SORT_H
#define SORT_H

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

/**
 * struct listint_s - Doubly linked list node
 *
 * @n: Integer stored in the node
 * @prev: Pointer to the previous element of the list
 * @next: Pointer to the next element of the list
 */
typedef struct listint_s
{
	const int n;
	struct listint_s *prev;
	struct listint_s *next;
} listint_t;

/* Given functions */
void print_array(const int *array, size_t size);
void print_list(const listint_t *list);

/* prototypes for the given questions */
void bubble_sort(int *array, size_t size);
void swp_int(int *aa, int *ab);
void insertion_sort_list(listint_t **list);
void swp_ndes(listint_t **list, listint_t *first_int, listint_t *second_int);
void swp_int(int *aa, int *ab);
void selection_sort(int *array, size_t size);
int lomuto_part(int *array, int head, int tail, size_t size);
void quick_sort_recursion(int *array, int head, int tail, size_t size);
void quick_sort(int *array, size_t size);


#endif /* SORT_H */
