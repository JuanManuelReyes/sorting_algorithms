#include <stdio.h>
#include "sort.h"

void swap(int* xp, int* yp)
{
	int temp = *xp;
	*xp = *yp;
	*yp = temp;
}

int inOrder(int *array, size_t size)
{
    size_t j = 0;
    
    for (j = 0; j < size - i - 1; j++)
    {
        if(array[j] > array[j + 1])
            return (1);
    }
    return (0);
}



void bubble_sort(int *array, size_t size)
{
    size_t i, j;
	while (1)
    {
		for (j = 0; j < size - i - 1; j++)
        {
            if (array[j] > array[j + 1])
            {
				swap(&array[j], &array[j + 1]);
            }
        }

        if (inOrder(&array, size) == 0)
            break;
        
        print_array(array, size);
    }
}