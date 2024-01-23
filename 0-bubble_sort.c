#include "sort.h"
/**
 * bubble_sort - sort array elements in ascending order
 * @array: pointer to array to be sorted
 * @size: size of the array
 */
void bubble_sort(int *array, size_t size)
{
	int tmp = 0, swaped = 0;
	size_t count = 0;

	if (size < 2)
		return;

	while (1)
	{
		swapped = 0;

		for (count = 0; count < size - 1; count++)
		{
			if (array[count] > array[count + 1])
			{
				tmp = array[count];
				array[count] = array[count + 1];
				array[count + 1] = tmp;
				swapped = 1;
				print_array(array, size);
			}
		}
		if (swapped == 0)
			break;
	}
}
