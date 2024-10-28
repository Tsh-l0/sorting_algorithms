#include "sort.h"

/**
 * swp_int - Swops ints in an array
 *
 * @aa: Int 1 to be swopped
 * @ab: Int 2 to be swopped
 */
void swp_int(int *aa, int *ab)
{
	int tmp_int;

	tmp_int = *aa;
	*aa = *ab;
	*ab = tmp_int;
}

/**
 * bubble_sort - Sorts an array of integers in ascending order
 * using the Bubble sort algorithm
 *
 * @array: The array of int to be sorted
 * @size: Size of the array to be sorted
 *
 * Returns: An array after each int has been swopped
 */

void bubble_sort(int *array, size_t size)
{
	size_t ind_int, len_int = size;
	bool swopped = false;

	if (array == NULL || size < 2)
		return;

	while (swopped == false)
	{
		swopped = true;
		for (ind_int = 0; ind_int < len_int - 1; ind_int++)
		{
			if (array[ind_int] > array[ind_int + 1])
			{
				swp_int(array + ind_int, array + ind_int + 1);
				print_array(array, size);
				swopped = false;
			}
		}
		len_int--;
	}

}
