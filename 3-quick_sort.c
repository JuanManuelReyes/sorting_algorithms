#include "sort.h"
/**
 *
 *
 **/
void swap_position(int *array, int *number1, int *number2, size_t size)
{
	int exchange_position = *number1;

	*number1 = *number2;
	*number2 = exchange_position;
	print_array(array, size);
}
/**
 *
 *
 **/
int partition(int *array, int start, int end, size_t size)
{
	int pivot = array[end];
	int Index = start;
	int i = 0;

	for (i = start; i < end; i++)
	{
		if (array[i] <= pivot)
		{
			if (Index != i)
			{
				swap_position(array, &array[i], &array[Index], size);
			}
			Index++;
		}
	}
	if (Index != end)
		swap_position(array, &array[end], &array[Index], size);
	return Index;
}
/**
 *
 *
 **/
void quickSort(int *array, int low, int high, size_t size)
{
	int pi = 0;

	if(low < high)
	{
		pi = partition(array, low, high, size);
		quickSort(array, low, pi - 1, size);
		quickSort(array, pi + 1, high, size);
	}
}
/**
 *
 *
 **/
void quick_sort(int *array, size_t size)
{
	quickSort(array, 0, size - 1, size);
}
        /*int lIndexOfLargestElement = 0, lTmp = 0, lPivot = 0;
        size_t i = 0;

        lPivot = array[size - 1];
        
        print_array(array, size);

        for (i = 0; i < size - 1; i++)
        {
                if (array[i] < lPivot)
                {
                        int lTmp = array[i];
                        array[i] = array[lIndexOfLargestElement];
                        array[lIndexOfLargestElement]  = lTmp;
                        lIndexOfLargestElement++;
                }
        }
        lTmp = array[lIndexOfLargestElement];
        array[lIndexOfLargestElement] = array[size - 1];
        array[size - 1] = lTmp;

        if (lIndexOfLargestElement > 1)
        {
                quick_sort(array, lIndexOfLargestElement);
        }

        if (size - lIndexOfLargestElement - 1 > 1)
        {
                quick_sort(array + lIndexOfLargestElement + 1, size - lIndexOfLargestElement - 1);
        }
}*/