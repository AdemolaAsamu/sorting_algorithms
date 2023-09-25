#ifndef SORT_H
#define SORT_H

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <stddef.h>

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

/*typedef pointers to node of list*/
typedef struct listint_s *node;

/*Function Prototypes for the Tasks*/
void print_array(const int *array, size_t size);
void print_list(const listint_t *list);
void bubble_sort(int *array, size_t size);
void insertion_sort_list(listint_t **list);
int list_size(const listint_t *list);
void shell_sort(int *array, size_t size);
void selection_sort(int *array, size_t size);
void counting_sort(int *array, size_t size);
void merge_sort(int *array, size_t size);


/*SORT_H Ending*/
#endif
