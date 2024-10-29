#include "sort.h"

/**
 * swp_int - Swops integers in an array
 *
 * @aa: First int to be swopped
 * @ab: Second int to be swopped
 */
void swp_int(int *aa, int *ab)
{
	int tmp_int;

	tmp_int = *aa;
	*aa = *ab;
	*ab = tmp_int;
}

/**
 * selection_sort - sorts an array of integers in ascending order
 * using the Selection sort algorithm
 *
 * @array: The array to be sorted
 * @size: The size of the array
 *
 * Return: An array after each swop has been done
 */

void selection_sort(int *array, size_t size)
{
	size_t k, l, min_idx;

	if (array == NULL || size < 2)
		return;

	for (k = 0; k < size - 1; k++)
	{
		min_idx = k;
		for (l = k + 1; l < size; l++)
		{
			if (array[l] < array[min_idx])
				min_idx = l;
		}
		if (k != min_idx)
		{
			swp_int(&array[k], &array[min_idx]);
			print_array(array, size);
		}
	}
}
