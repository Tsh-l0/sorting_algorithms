#include "sort.h"

/**
 * swp_ints - Swops integers in an array
 *
 * @aa: First int to swop
 * @ab: Second int to swop
 * @array: The array of integers
 * @size: Size of the array
 */
void swp_ints(int *aa, int *ab, int *array, size_t size)
{
	if (*aa != *ab)
	{
		int tmp_int;

		tmp_int = *aa;
		*aa = *ab;
		*ab = tmp_int;
		print_array(array, size);
	}
}

/**
 * lomuto_part - Orders a subset of an array of integers according to
 * the Lomuto partition scheme (last element as the pivot).
 *
 * @array: The array containing the integers
 * @head: The starting index of the subset
 * @tail: The ending index of the subset
 * @size: The size of the array
 *
 * Return: The final partition of the index
 */
int lomuto_part(int *array, int head, int tail, size_t size)
{
	int pivot = array[tail];
	int i = head - 1, j;

	for (j = head; j < tail; j++)
	{
		if (array[j] <= pivot)
		{
			i++;
			swp_ints(&array[i], &array[j], array, size);
		}
	}
	swp_ints(&array[i + 1], &array[tail], array, size);

	return (i + 1);
}

/**
 * quick_sort_recursion - Implements the quick sort algorithm through
 * recursion
 *
 * @array: The array containing the integers
 * @head: The starting index of the subset
 * @tail: The ending index of the subset
 * @size: The size of the array
 */
void quick_sort_recursion(int *array, int head, int tail, size_t size)
{
	if (head < tail)
	{
		int part_idx = lomuto_part(array, head, tail, size);

		quick_sort_recursion(array, head, part_idx - 1, size);
		quick_sort_recursion(array, part_idx + 1, tail, size);
	}
}

/**
 * quick_sort - Dorts an array in ascending order using the quick sort
 * algorithm.
 *
 * @array: The size of the array
 * @size: The size of the array
 */
void quick_sort(int *array, size_t size)
{
	if (array == NULL || size < 2)
		return;

	quick_sort_recursion(array, 0, size - 1, size);
}
