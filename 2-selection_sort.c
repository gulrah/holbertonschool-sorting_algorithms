#include "sort.h"

/**
 * selection_sort - Sorts an array of integers in ascending order using Selection Sort
 * @array: The array to be sorted
 * @size: The size of the array
 */
void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
void selection_sort(int *array, size_t size)
{
    size_t i, j, min_idx;

    for (i = 0; i < size - 1; i++)
    {
        min_idx = i;
        for (j = i + 1; j < size; j++)
        {
            if (array[j] < array[min_idx])
                min_idx = j;
        }

        if (min_idx != i)
        {
            /* Swap elements if the minimum element is not at its correct position */
            swap(&array[i], &array[min_idx]);
            /* Print array after each swap */
            print_array(array, size);
        }
    }
}
