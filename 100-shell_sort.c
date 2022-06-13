#include "sort.h"
void shell_sort(int *array, size_t size)
{
                long unsigned int in = 0, pos2 = 0;
		long unsigned int h = 1;
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
			print_array(array,size);
		}
}