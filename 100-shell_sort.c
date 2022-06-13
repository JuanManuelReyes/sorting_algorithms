#include "sort.h"
/**
 *shell_sort - the above function sorts an array
 *of integers in ascending order using the Shell sort algorithm.
 * @array: The array to be sorted
 * @size: The size of the array
 **/
void shell_sort(int *array, size_t size)
{
		unsigned long int in = 0, pos2 = 0;
		unsigned long int h = 1;
		int temp = 0;

		h = (h * 3) + 1;
		while (h > 0)
		{
			for (pos2 = h; pos2 < size; pos2++)
			{
				temp = array[pos2];
				in = pos2;
				while (in >= h && array[in - h] >= temp)
				{
					array[in] = array[in - h];
					in = in - h;
				}
				array[in] = temp;
			}
			h = (h - 1) / 3;
			print_array(array, size);
		}
}
